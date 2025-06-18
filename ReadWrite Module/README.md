# 📂 Read and Write Module (rw.c)

This C module provides a simple and efficient interface for handling file operations, including reading, writing, appending, and working with binary files (such as images). It is designed to make file I/O easier and cleaner in C programs.

---

## 🧰 Features

- Read text files into buffers (`Read`)
- Write or overwrite text files (`Write`)
- Append text to files (`Append`)
- Get file size (`get_size`)
- Read/write/append binary data (`read_bin`, `write_bin`, `append_bin`)

---

## 📦 Installation

Place `rw.c` and `rw.h` in your project directory. Include the header file in your C source file:

```c
#include "rw.h"
```

---

## ⚙️ Compilation

Use `gcc` to compile your program with the `rw.c` module:

```bash
gcc -o myprogram myprogram.c rw.c
```

![Compilation](https://github.com/mohammedfarhannp/C_Modules/blob/master/ReadWrite%20Module/imgs/Screenshot_Compilation.png)

---

## 🧪 Functions Overview

### 📏 `int get_size(const char *filename)`
Returns the size (in bytes) of the specified file. Useful for allocating buffers.

---

### 📖 `int Read(const char *filename, char buffer[], size_t max_size)`
Reads the content of a text file into the given `buffer`, null-terminated. You must provide a buffer large enough to hold the file content.

---

### 📝 `int Write(const char *filename, const char *buffer)`
Overwrites a file with the contents of the given `buffer`.

---

### ➕ `int Append(const char *filename, const char *buffer)`
Appends the contents of the `buffer` to the end of the specified file.

---

## 🔧 Binary File Support

These functions are useful for reading and modifying binary files such as images:

---

### 📥 `int read_bin(const char *filename, unsigned char buffer[], size_t max_size)`
Reads binary data into the provided buffer. Returns the number of bytes read.

---

### 📤 `int write_bin(const char *filename, const unsigned char buffer[], size_t size)`
Writes binary data to a file (overwrites existing content).

---

### 📎 `int append_bin(const char *filename, const unsigned char buffer[], size_t size)`
Appends binary data to the end of a file.

---

## 🧾 Example Usage (Text Mode)

```c
#include "rw.h"

int main() {
    const char *file = "data.txt";

    int size = get_size(file);
    if (size <= 0) return 1;

    char buffer[size];
    Read(file, buffer, size);
    printf("File Contents:\n%s\n", buffer);

    Write("copy.txt", buffer);
    Append("copy.txt", "\nAppended text.");

    return 0;
}
```

---

## 🖼️ Example Usage (Binary Mode)

```c
#include "rw.h"

int main() {
    const char *image_file = "image.png";

    int size = get_size(image_file);
    if (size <= 0) return 1;

    unsigned char buffer[size];
    int bytes_read = read_bin(image_file, buffer, size);

    write_bin("copy_image.png", buffer, bytes_read);
    return 0;
}
```

---

## 📄 License

This module is free to use and modify under the MIT License. Attribution is appreciated!

---

