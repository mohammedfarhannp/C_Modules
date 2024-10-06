# Read and Write Module
This C module or component is designed to make file handling easier. With this header file included in a C program we can read data from a file, write data to a file (overwrite) or append data to a file with it's existing contents.

## Usage
To add this header file to your C program type *#include "rw.h"* at the top portion of the C program file.

To compile your C program type in command prompt or terminal `gcc -o <output_file_name> <your_C_program_file> rw.c`

![Compilation](https://github.com/mohammedfarhannp/C_Modules/blob/master/ReadWrite%20Module/imgs/Screenshot_Compilation.png)

This module consists of four functions;
  get_size
  Read
  Write
  Append

get_size function takes one argument, the full path of the file; the function then returns the total number of characters in the file + 1 integer value.

Read function takes two arguments, the full path of the file to read and the buffer variable to store data. Note that the buffer variable must be of char array with size of return value from get_size function declared in the main function; the function returns the buffer variable with contents of the file in it.

Write function takes two arguments, the full path of the file to overwrite and the buffer variable with data; the function over writes the file with contents in buffer variable passed as argument.

Append function similar to Write function but appends content to the file instead of over writting the file with new contents.
