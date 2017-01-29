#!/usr/bin/env ruby
#
# Bocher Diedrich Sandmeier

class EnumConverter

	def initialize(file)
		@filepath = file_exists?(file)
		@file = open_file()
		@file_clean = ''
		@generated_code = ''
	end

	def file_exists?(file)
		if !File.exists?(file)
		STDERR.puts "File #{file} does not exist!"
		exit 0
		end
    return file
	end

	def open_file()
		begin
			file = File.new(@filepath,"r")
		rescue => err
			STDERR.puts "Cannot open file #{@filepath}: #{err}"
			exit 1
		end
		return file
	end
	
	def clean_comments()
		@file_clean = @file.read.gsub(/\/\*.*?\*\//m, "")
	end
	
	def each_entrylist()
		enumtype_list = Array.new()
		fill_list = 0
		@file_clean.each_line { |line|
			if line.index{'{'} == 0
				fill_list = 1
				next
			elsif line.index{'}'} == 0
				enumtype_list.push(line.gsub(/[}\s;]/, ''))
				fill_list = 0
				yield enumtype_list
				enumtype_list.clear
				next
			end

			if fill_list == 1
				enumtype_list.push(line.chomp)
			end
		}
	end
	
	def generate_functions()
		
		functions = ''

		@file_clean.each_entrylist() {|value_list|
			enumtype_functions = ''
			enum_maxlistindex = value_list.length - 1
			enum_typename = value_list[enum_maxlistindex]

			# create the enum list
			enumtype_functions << 'typedef enum {'
			value_list.each {|i|
				functions << i
				if i < value_list.length - 3
					functions << ', '
				elsif i < value_list.length - 2
					functions << '} '
				else
					functions << ";\n\n"
				end
			}

			# create struct
			enumtype_functions << "const static struct {\n"
			enumtype_functions << enum_typename + "value;\n"
			enumtype_functions << 'const char *str;}'
			enumtype_functions << 'conv' + enum_typename + "[] = {\n"
					value_list[0..-1].each {|i|
						functions << '{' + i + ', "' + i + '"}'
						if i < value_list.length - 2
							functions << ",\n"
						end
			}
			enumtype_functions << "};\n\n"

			# create enum to String function
			enumtype_functions <<-'HEREDOC_enum2string'
			const char* ENUM_TYPENAME2String(int index)
			{
				return convENUM_TYPENAME[index].str;
			}
			HEREDOC_enum2string

			# create String to enum function

			enumtype_functions <<-'HEREDOC_string2enum'
			int string2ENUM_TYPENAME(const char *s)
			{
				int i;
				for (i = 0; i < sizeof(convENUM_TYPENAME) / sizeof(convENUM_TYPENAME[0]); i++)
				{
					if (!strcmp(s, convENUM_TYPENAME[i].str)) // 0: match
						return (int) convENUM_TYPENAME[i].value;
				}	
				return -1;
			}
			HEREDOC_string2enum

			#create test function

			enumtype_functions <<-'HEREDOC_test'
			void ENUM_TYPENAME_test(void)
			{
				int idx;
				const char* s;
				for (idx = 0; idx < ENUM_MAXLISTINDEX; idx++)
				{
					s = ENUM_TYPENAME2String(idx);
					int value = ENUM_TYPENAME(s);
					assert(value != -1 && (ENUM_TYPENAME) value == idx);
				}
			}
			HEREDOC_test

		substitutions = {
			"ENUM_TYPENAME" 	=> "#{enum_typename}",
			"ENUM_MAXLISTINDEX" => "#{enum_maxlistindex}"
		}

		functions << enumtype_functions.chomp.gsub(/(ENUM_TYPENAME|ENUM_MAXLISTINDEX)/, substitutions)
		}
		return functions
	
	end
	
	def	generate_code()
		@generated_code <<-HEREDOC_Header

		#include <stdio.h>
		#include <stdlib.h>
		#include <assert.h>
		#include <string.h>
		HEREDOC_Header

		@generated_code << generate_functions()

		puts @generated_code
		
	end 

end

###########

if ARGV.length != 1
	STDERR.puts "Usage : #{$0} filename"
	exit 0
end

filename = ARGV[0]

converter = EnumConverter.new(filename)
converter.clean_comments()
converter.generate_code()
