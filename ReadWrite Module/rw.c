#include <stdio.h>
#include <stddef.h>

/* Get file size in bytes */
int get_size(const char File_Name[]) {
    FILE* fp = fopen(File_Name, "rb");  // binary mode
    if (!fp) {
        perror("Error opening file");
        return -1;
    }

    fseek(fp, 0, SEEK_END);
    int size = (int)ftell(fp);
    fclose(fp);

    return size;
}

/* Read text file into buffer (null-terminated) */
int Read(const char File_Name[], char Buffer[], size_t max_size) {
    FILE* fp = fopen(File_Name, "r");
    if (!fp) {
        perror("Error opening file");
        return -1;
    }

    size_t i = 0;
    int ch;
    while (i < max_size - 1 && (ch = fgetc(fp)) != EOF) {
        Buffer[i++] = (char)ch;
    }
    Buffer[i] = '\0';
    fclose(fp);

    return (int)i;
}

/* Write string buffer to text file */
int Write(const char File_Name[], const char Buffer[]) {
    FILE* fp = fopen(File_Name, "w");
    if (!fp) {
        perror("Error writing to file");
        return -1;
    }

    fputs(Buffer, fp);
    fclose(fp);

    return 0;
}

/* Append string buffer to text file */
int Append(const char File_Name[], const char Buffer[]) {
    FILE* fp = fopen(File_Name, "a");
    if (!fp) {
        perror("Error appending to file");
        return -1;
    }

    fputs(Buffer, fp);
    fclose(fp);

    return 0;
}

/* Read binary file into buffer (returns bytes read) */
int read_bin(const char File_Name[], unsigned char Buffer[], size_t max_size) {
    FILE* fp = fopen(File_Name, "rb");
    if (!fp) {
        perror("Error opening binary file");
        return -1;
    }

    size_t bytes_read = fread(Buffer, 1, max_size, fp);
    fclose(fp);

    return (int)bytes_read;
}

/* Write binary data to file */
int write_bin(const char File_Name[], const unsigned char Buffer[], size_t size) {
    FILE* fp = fopen(File_Name, "wb");
    if (!fp) {
        perror("Error writing binary file");
        return -1;
    }

    fwrite(Buffer, 1, size, fp);
    fclose(fp);

    return 0;
}

/* Append binary data to file */
int append_bin(const char File_Name[], const unsigned char Buffer[], size_t size) {
    FILE* fp = fopen(File_Name, "ab");
    if (!fp) {
        perror("Error appending binary file");
        return -1;
    }

    fwrite(Buffer, 1, size, fp);
    fclose(fp);

    return 0;
}
