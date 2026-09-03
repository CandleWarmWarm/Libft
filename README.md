*This project has been created as part of the 42 curriculum by nsomjaip.*

# libft

## Description

**libft** is a custom C standard library built from scratch as part of the 42
common core curriculum. The goal of the project is to re-implement a set of
essential C library functions (from `<string.h>`, `<ctype.h>`, `<stdlib.h>`,
etc.) plus a few additional utility functions, in order to:

- Deeply understand how these functions work under the hood (memory
  handling, pointer arithmetic, edge cases, undefined behaviour).
- Build a personal toolbox of reusable, well-tested functions to speed up
  and support every future 42 project (`ft_printf`, `get_next_line`,
  `push_swap`, `minishell`, etc.).
- Practice norm-compliant, modular C code with proper memory management
  (no leaks, verified with Valgrind).

In short: libft is the foundation every later project is built on top of.

## Instructions

### Compilation

```bash
make        # compiles libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # fcleans and recompiles everything
```

The library compiles with the mandatory 42 flags:

```
-Wall -Wextra -Werror
```

This produces a static library archive: **`libft.a`**

### Using libft in another project

1. Copy the `libft` folder into your project (or add it as a subfolder /
   submodule).
2. Compile it: `make -C libft`
3. Link it when compiling your project:

```bash
cc your_files.c -Llibft -lft -Ilibft -o your_program
```

4. Include the header in your source files:

```c
#include "libft.h"
```

## Library

### Detailed description of the libft library

The library re-implements standard C functions and groups its own helper
functions by category:

**Part 1 — Libc function re-implementations**
Custom versions of standard `<ctype.h>` and `<string.h>` functions, such as
character checks (`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isprint`,
`ft_isascii`, `ft_toupper`, `ft_tolower`), string/memory functions
(`ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`,
`ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`,
`ft_memchr`, `ft_memcmp`, `ft_strnstr`), and conversion (`ft_atoi`).

**Part 2 — Additional functions**
Functions not present in the standard C library, useful for later projects:
memory allocation helpers (`ft_calloc`, `ft_strdup`), string manipulation
(`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`,
`ft_strmapi`, `ft_striteri`), and output functions
(`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`).

**Part 3 — Bonus: linked list functions**
A minimal linked list implementation (`t_list`) and its operations:
`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`,
`ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

Every function was tested against edge cases (`NULL` pointers, empty
strings, size `0`, negative numbers, overlapping memory for `memmove`) and
checked for undefined behaviour and memory leaks with Valgrind.

> Adjust the function list above to exactly match what you've implemented
> in your `libft.h`.

## Resources

**Classic references**
- 42 libft subject PDF (official project instructions)
- `man` pages for the original functions (`man strlen`, `man memcpy`,
  `man atoi`, etc.)
- The C Programming Language, Kernighan & Ritchie
- Valgrind documentation (memory leak / undefined behaviour detection)
- 42 Norm documentation (coding style rules)

**AI usage**
AI (Claude) was used to help generate this README file, to assist with
debugging specific functions, to help think through edge cases to test
(NULL inputs, empty strings, boundary sizes, overlapping memory), and to
help identify potential undefined behaviour in the implementations. All
core library code was written and understood by the author; AI was not
used to generate the function implementations themselves.
