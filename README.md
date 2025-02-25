# Libft

## Overview

**Libft** is a custom C library created as part of a coding project to reimplement standard library functions and add useful additional functions. It serves as a foundational static library for future C projects, enhancing understanding of function implementations.

## Installation

Clone the repository and compile the project:

```bash
git clone https://github.com/pin3dev/42_Libft.git
cd 42_Libft/libft
make
```

## Usage

To use the library in your C projects:

1. **Include the header:**
    ```c
    #include "libft/inc/libft.h"
    ```

2. **Compile your project:**
    ```bash
    gcc -Wall -Wextra -Werror -o your_exec your_code.c libft.a
    ```

## Project Structure

- **Libc functions:** Reimplementations of standard C library functions.
- **Additional functions:** Newly added utility functions enhancing the library.
- **Categories:** Functions organized into strings, memory, utility, and linked lists.

## Compliance

The project adheres to the 42 School Norm coding guidelines, influencing design and implementation choices.
