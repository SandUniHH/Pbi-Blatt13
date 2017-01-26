#!/usr/bin/env ruby
#
# Bocher Diedrich Sandmeier

class EnumConverter

	def initialize(file)
		@filepath = file_exists?(file)
		@file = open_file()
		@file_clean = ''
		@generated_code() = ''
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
	
	def each()
		
	end
	
	def generate_functions()
		
		functions = ''
		@file_clean.each() {|value_list|
			functions << 'typedef enum {'
			functions << 
			value_list.each {|i|
				if i < value_list.length - 2
					functions << i + ','
				end
			}
			/*
			functions <<HEREDOC_code
typedef enum
{
  ARROW_LEFT,
  ARROW_RIGHT,
  ARROW_BOTH,
  ARROW_NONE
} ArrowStatus;
*/
			
			HEREDOC_code
			
		}
		return functions
	
	end
	
	def	generate_code()
		@generated_code <<HEREDOC_Header
		
// Bocher Diedrich Sandmeier

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
HEREDOC_Header

@generated_code << generate_functions()


		
	end 

end

###########

converter = EnumConverter.new("Enumconv-material/gt_enums.c")
converter.clean_comments()
converter.generate_code()
