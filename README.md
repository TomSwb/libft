*This project has been created as part of the 42 curriculum by [tschwab](https://profile-v3.intra.42.fr/users/tschwab)*

# Libft - a library by TomSwb

## Description

#### Goal:
Create my own C library (a collection of functions) to use during the 42 curriculum.

#### Brief overview:
Contains a total of 43 functions, split into three parts:
1. Libc functions (reimplemented with the `ft_` prefix, with some adaptations).
2. Additional functions (according to specific instructions).
3. Linked list related functions (according to specific instructions).

Additionally contains:
- `libft.h`: the header with all the prototypes and the `t_list` structure.
- `Makefile`: builds the `libft.a` static library.
- `README.md`: this file.

## Instructions

1. Clone the repo at the root of your project, which creates the `libft` directory:

```bash
git clone https://github.com/TomSwb/libft.git libft
```

*Optional: remove the `.with_mains` folder (it is a test folder) and the `.git` folder (to avoid a nested repository inside your project).*

2. Go into the newly created `./libft` directory and run:

```bash
make
```

3. In your project Makefile:
- Add this flag when compiling:

	```text
	-I./libft
	```

- Add this variable:

	```text
	LIBFT = ./libft/libft.a
	```

- Build the library through its own Makefile before your project, e.g.:

	```text
	$(LIBFT):
		$(MAKE) -C ./libft
	```

- Link it when compiling your program, e.g.:

	```text
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT)
	```

4. Include the header in any file that needs the libft function declarations:

```c
#include "libft.h"
```

5. If you alter any function, rebuild the library (and if you add or remove a file, also update the `SOURCES` list in the library Makefile):

```bash
make re
```

6. You can remove the `.o` files:

```bash
make clean
```

7. Or remove both the `.o` files and the `libft.a` library:

```bash
make fclean
```

## Resources

#### Editor:
- `VSCodium`: used to avoid Microsoft telemetry and the temptation of integrated AI.

#### 42:
- `libft.pdf` version: 19.3

#### System:
- `Linux man` pages for the libc related functions.

#### GitHub:

Reference repo:
- https://github.com/mrochedy/42-Libft/tree/main

Tripouille tester:
- https://github.com/Tripouille/libftTester

#### Other:
- [Markdown List Syntax](https://www.markdownlang.com/basic/lists.html) - to learn Markdown syntax.

#### AI:

⚠️ Disclaimer: I only ask for actual answers/solutions when I realise that I am missing theoretical knowledge,
e.g. a new syntax or a new concept I had not explored before.

I always write my code to the best of my abilities first.

My AI agents are set to guide me with questions, following the 42 pedagogical philosophy.

I use VSCodium on purpose to not have any AI integration. This means AI only sees my code when I paste it into a chat or share the repository for a review, and AI never writes my code: I do not copy-paste from AI into my code.

- `Perplexity`:
	1. A quick search to understand how to actually use the libft library in future projects.
	2. Confirming what some Markdown syntax I found in other repos does.
	3. Back and forth conversations to ensure my understanding of the more complex functions.

- `ChatGPT`:
	1. Back and forth conversations to ensure my understanding of the more complex functions.
	2. Help in learning to find edge cases by myself and to make sure functions are safe and complete.
	3. Help with the theory of pointers, their different syntaxes and their related uses.
	4. Help in learning clean architecture.
	5. Help with the theory behind linked lists.
	6. Final documentation checks.

- `Claude`:
	1. Back and forth conversations to make sure everything is correct after a first failed evaluation.
	2. "Stupid mistake" checks of the repository (file names, Makefile, headers, Norm), to avoid failing an evaluation because e.g. I used a `.MD` extension instead of `.md`.
	3. Fixing my 42 header editor extension (not part of the project).
	4. Help in completing and correcting this README.

## Detailed description

#### List of all the available functions:

##### Part 1: Libc replica

- `ft_isprint`: Checks for any printable character, including space.
- `ft_isascii`: Checks if the given int `c` is a 7-bit value that fits in the ASCII character set (0 to 127).
- `ft_isalpha`: Checks for an alphabetic character: 'A' through 'Z' and 'a' through 'z'.
- `ft_isdigit`: Checks for a digit: '0' through '9'.
- `ft_isalnum`: Checks for an alphanumeric character; it is equivalent to `(ft_isalpha(c) || ft_isdigit(c))`.

- `ft_tolower`: If `c` is an uppercase ASCII letter, returns its lowercase equivalent. Otherwise, returns `c` unchanged.
- `ft_toupper`: If `c` is a lowercase ASCII letter, returns its uppercase equivalent. Otherwise, returns `c` unchanged.
- `ft_atoi`: Converts the initial numerical portion of the given string to an int, skipping leading whitespace and accepting at most one '+' or '-' sign.

- `ft_strlen`: Returns the length of the given string `s`.
- `ft_strlcpy`: Copies at most `size - 1` characters from `src` into `dst`, always NUL-terminating the result if `size` is not 0. Returns the length of `src` (the length of the string it tried to create).
- `ft_strlcat`: Appends `src` to the end of `dst`, writing at most `size - strlen(dst) - 1` characters and NUL-terminating the result. Returns the total length of the string it tried to create: `strlen(dst) + strlen(src)`, or `size + strlen(src)` if `dst` has no '\0' within `size` bytes (in which case nothing is appended).
- `ft_strncmp`: Compares up to `n` characters of `s1` and `s2` as unsigned char values, stopping at a '\0' character. Returns the difference between the first pair of different characters, or 0 if no difference is found.
- `ft_strnstr`: Locates the first occurrence of the NUL-terminated string `little` in the string `big`, searching no more than `len` characters. Characters after a '\0' are not searched. Returns `big` if `little` is empty, NULL if `little` is not found, otherwise a pointer to the first character of the occurrence.
- `ft_strchr`: Returns a pointer to the first occurrence of the character `c` in `s`, or NULL if it is not found. The terminating '\0' is considered part of the string, so if `c` is '\0', it returns a pointer to the terminator.
- `ft_strrchr`: Returns a pointer to the last occurrence of the character `c` in `s`, or NULL if it is not found. The terminating '\0' is considered part of the string, so if `c` is '\0', it returns a pointer to the terminator.

- `ft_bzero`: Fills the first `n` bytes of the given memory area with '\0'.
- `ft_memchr`: Searches the first `n` bytes of the given memory area for the byte value `c` (as unsigned char), and returns a pointer to the first matching byte, or NULL if it is not found.
- `ft_memcmp`: Compares the first `n` bytes of `s1` and `s2` as unsigned char values. Returns the difference between the first pair of different bytes, or 0 if they are identical.
- `ft_memcpy`: Copies `n` bytes from `src` into `dest` and returns `dest`. Does not handle overlapping memory areas.
- `ft_memmove`: Copies `n` bytes from `src` into `dest` and returns `dest`. Unlike `ft_memcpy`, the copy is correct even if the memory areas overlap.
- `ft_memset`: Fills the first `n` bytes of `s` with the byte value `c` and returns `s`.

- `ft_calloc`: Allocates memory for `n` elements of `size` bytes each, sets all bytes to 0, and returns a pointer to it. Returns NULL if the allocation fails or if `n * size` would overflow. If `n` or `size` is 0, returns a unique pointer that can be passed to `free()`.
- `ft_strdup`: Returns a new string, allocated with malloc, containing a copy of `s`.

##### Part 2: Additional functions

- `ft_substr`: Returns a malloced string containing at most `len` characters from `s`, starting at index `start`. If `start` is greater than or equal to `ft_strlen(s)`, returns an allocated empty string.
- `ft_strjoin`: Returns a malloced string containing the concatenation of `s1` and `s2`.
- `ft_strtrim`: Returns a malloced copy of `s1` with all characters present in `set` removed from its beginning and end.
- `ft_split`: Returns a malloced, NULL-terminated array of strings obtained by splitting `s` using the character `c` as a delimiter. If any allocation fails, everything already allocated is freed and NULL is returned.

- `ft_itoa`: Returns a malloced string representing the given int `n` (negative numbers included).

- `ft_strmapi`: Returns a malloced string containing the result of applying the function `f` to each character of `s` and its index.
- `ft_striteri`: Applies the function `f` to each character of `s`, passing its index and its address so it can be modified in place.

- `ft_putchar_fd`: Writes the character `c` to the given file descriptor `fd`.
- `ft_putstr_fd`: Writes the string `s` to the given file descriptor `fd`, without a newline.
- `ft_putendl_fd`: Writes the string `s` to the given file descriptor `fd`, followed by a newline.
- `ft_putnbr_fd`: Writes the integer `n` to the given file descriptor `fd`.

##### Part 3: Linked list related

- `ft_lstnew`: Returns a new allocated node, with its content set to the given `content` and `next` set to NULL.
- `ft_lstadd_front`: Adds the node `new` at the front of the list `lst`, making `new->next` point to the original first node (or NULL if the list was empty).
- `ft_lstsize`: Returns the number of nodes in the list `lst`.
- `ft_lstlast`: Returns a pointer to the last node of the list `lst`.
- `ft_lstadd_back`: Adds the node `new` at the end of the list `lst`.

- `ft_lstdelone`: Frees a single node after applying the function `del` to its content. Does not free the next node.
- `ft_lstclear`: Frees every node of `lst` and their contents, using `del` on each content, then sets the list pointer to NULL.

- `ft_lstiter`: Iterates through the list `lst`, applying the function `f` to the content of each node.
- `ft_lstmap`: Returns a new list created by applying the function `f` to the content of each node of `lst`. If an allocation fails, clears the whole new list using `del` and returns NULL.