#ifndef RW_H
#define RW_H

#include <stddef.h>

/* Text mode functions */
int get_size(const char File_Name[]);
int Read(const char File_Name[], char Buffer[], size_t max_size);
int Write(const char File_Name[], const char Buffer[]);
int Append(const char File_Name[], const char Buffer[]);

/* Binary mode functions */
int read_bin(const char File_Name[], unsigned char Buffer[], size_t max_size);
int write_bin(const char File_Name[], const unsigned char Buffer[], size_t size);
int append_bin(const char File_Name[], const unsigned char Buffer[], size_t size);

#endif
