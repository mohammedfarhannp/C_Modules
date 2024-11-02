# Random Module
This C module or component is designed to produce random numbers and random strings. This module contains only 2 functions, one for random number from a range and random string of fixed size. Random string would consist of all characters range a-zA-Z. 

Two Functions are *random_num* and *random_str*.
The *random_num(long, long)* takes 2 long numbers as arguments, first one is lower limit and the second one is upper limit. A random number between these limits is produced and returned. The return data type is long.

The *random_str(int, char [])* is a void function, it takes an integer value as first argument and a char array as second argument. A random string is then populated with string length of integer argument into char array passed. The integer to be passed to this argument shouldn't be greater than the size of the char array.

## Usage
To add this header file to your C program type *#include "random.h"* at the top portion of the C program file.

To compile your C program type in command prompt or terminal `gcc -o <output_file_name> <your_C_program_file> random.c`

![Compilation](https://github.com/mohammedfarhannp/C_Modules/blob/master/Random%20Module/imgs/Screenshot_Compilation.png)