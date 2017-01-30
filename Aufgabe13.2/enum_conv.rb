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
            clean_line = line.gsub(/[\s\n]/, '')

            if clean_line.empty?
                next
            end

            if clean_line.include?('{')
                fill_list = 1
            elsif fill_list == 1
                enumtype_list.push(clean_line.chomp)
                if clean_line.index('}') == 0
				    fill_list = 0
				    yield enumtype_list
				    enumtype_list.clear
				end
			end
		}
	end
	
	def generate_functions(value_list)

        enum_maxlistindex = value_list.length - 1
        enum_typename = value_list[enum_maxlistindex].gsub(/[}\s;]/, '')
			# create the enum list
			puts "typedef enum\n{"
			value_list.each {|entry|
				puts entry
            }

			# create struct
			puts <<~HEREDOC_struct
			
            const static struct 
            {			
            \t#{enum_typename} value;
            \tconst char *str;
            }
            conv#{enum_typename}[] = 
            {
            HEREDOC_struct

            value_list[0..-2].each_with_index {|entry, i|
                clean_entry = entry.gsub(/,/, '') # remove trailing commas
                print "\t{" + clean_entry + ', "' + clean_entry + '"}'
                if i < value_list.length - 2
                    puts ','
                end
            }
			puts "\n};"

			# create enum to String function
			puts <<~HEREDOC_enum2string
			
			const char* #{enum_typename}2String(int index)
			{
				return conv#{enum_typename}[index].str;
			}
			HEREDOC_enum2string

			# create String to enum function

			puts <<~HEREDOC_string2enum
			int string2#{enum_typename}(const char *s)
			{
				int i;
				for (i = 0; i < sizeof(conv#{enum_typename}) / sizeof(conv#{enum_typename}[0]); i++)
				{
					if (!strcmp(s, conv#{enum_typename}[i].str)) // 0: match
						return (int) conv#{enum_typename}[i].value;
				}	
				return -1;
			}

			HEREDOC_string2enum

			#create test function

			puts <<~HEREDOC_test
			void #{enum_typename}_test(void)
			{
				int idx;
				const char* s;
				for (idx = 0; idx < #{enum_maxlistindex}; idx++)
				{
					s = #{enum_typename}2String(idx);
					int value = string2#{enum_typename}(s);
					assert(value != -1 && (#{enum_typename}) value == idx);
				}
			}

			HEREDOC_test

	end
	
	def	generate_header()
		puts <<~HEREDOC_Header

		#include <stdio.h>
		#include <stdlib.h>
		#include <assert.h>
		#include <string.h>

		HEREDOC_Header
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
converter.generate_header()
converter.each_entrylist() {|value_list|
    converter.generate_functions(value_list)
    }
