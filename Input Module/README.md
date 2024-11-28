# Input Module
C module created for easy implementation of user input.

This module consists of various input function based on various data types.

## Module Functions Available
### Integer Input Functions
1. *short_input* - takes one char pointer argument and returns a short type integer. 
2. *int_input* - takes one char pointer argument and returns a int type integer.
3. *long_input* - takes one char pointer argument and returns a long type integer.
4. *long_long_input* - takes one char pointer argument and returns a long long type integer.

### Float Input Functions
1. *float_input* - takes one char pointer argument and returns a float type floating number.
2. *double_input* - takes one char pointer argument and returns a double type floating number.
3. *long_double_input* - takes one char pointer argument and returns a long double type floating number.

### String Input Functions
1. *char_pointer_input* - takes one char pointer argument, one integer argument, and another char pointer argument. This function populates the 3rd argument pointer from what the user input has received.

2. *char_array_input* - takes one char pointer argument, one integer argument, and a char array, This function populates the 3rd argument from what the user input has received.

## Usage
To add this header file to your C program type *#include "input.h"* at the top portion of the C program file.

To compile your C program type in command prompt or terminal `gcc -o <output_file_name> <your_C_program_file> input.c.`

![Compilation](https://github.com/mohammedfarhannp/C_Modules/blob/master/Input%20Module/imgs/Screenshot_Compilation.png)