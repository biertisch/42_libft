# Libft

![C](https://img.shields.io/badge/language-C-blue.svg)

### Overview

Libft is a **custom C library** containing reimplementations of standard C functions, together with new utilities. It is a foundational project at 42 school designed to deepen our understanding of **low-level concepts** and **memory management** in C.

The mandatory and bonus functions were implemented from scratch without relying on any external functions except `malloc`, `free`, and `write`.

After validating the project, I extended the library with some **extra functions** and reorganized all the files. A lightweight **tester** is also included.

---
### Features

#### Mandatory

###### Libc functions
* Character classification: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* String manipulation: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_atoi`
* Memory manipulation: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
* Memory management: `ft_calloc`, `ft_strdup`

###### Additional functions

* String manipulation: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
* Integer manipulation: `ft_itoa`
* Input/Output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

#### Bonus

* Linked lists: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

#### Extra (post-validation)
* Character classification: `ft_is_space`
* String manipulation: `ft_atol`, `ft_strcmp`
* Integer manipulation: `count_digits`, `ft_itoa_base`
* Memory management: `free_string_array`
* Input/Output: `ft_printf` (42 project), `get_next_line` (42 project), `print_int_array`, `print_string_array`, `print_list`

---
### Compilation

**Requirements**: `gcc`, `make`

```
git clone https://github.com/biertisch/libft.git
cd libft
make		# mandatory
make bonus	# mandatory + bonus
make extra	# everything
```

---
### Usage

#### To integrate in other projects:
  * Include `libft.h`.
  * Link with `-Llibft -lft`.

#### To build and execute tests:
```
make test		# test mandatory functions
make test_bonus	# test bonus functions
```

---
### Tester
A simple tester is included to quickly check the behaviour of libft mandatory and bonus functions.

To use it in your own project:
1. Copy the `tester` folder into your libft directory.
2. Run `make` from inside `tester`.
3. Or connect it to your Makefile with:
```
test:
	$(MAKE) -C tester

test_bonus:
	$(MAKE) -C tester test_bonus
```

---
### About 42

Founded in 2013, 42 is a global network of schools providing high-quality, scalable software engineering education. Its project-based, peer-to-peer curriculum emphasizes hands-on programming, algorithmic thinking, and systems-level problem solving.

---
### License & Contact

This repository is open for learning and reuse. Contributions, suggestions, and discussions are welcome — feel free to open an issue or reach out.