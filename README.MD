##### ⚠️ Currently being build, this repo includes my test files and todos

*This project has been created as part of the 42 curriculum by \<tschwab>*

# Libft - a library by TomSwb

## Description
	
#### Goal:
Create my own C library (a collection of functions) to use during the curriculum

#### Brief overview:	
Contains a total of XXX functions made according to :
1. Libc functions (with some adaptations).
2. Additional functions (according to specific instructions).
3. Linked list related functions (according to specific instructions).
	
Additionaly contains: 
-	libft.h.
-	Makefile.

## Instructions

1. Clone the repo at the root/libft of your project (creating the folder in the process):

```bash
git clone https://github.com/TomSwb/libft.git libft
```

2. Navigate to the newly created ./libft then run:

```bash
make
``` 

3. In your project Makefile:
- Add this flag to your compiling: 

	```text
	-I./libft
	```
	
- Add this var: 

	```text
	LIBFT = ./libft/libft.a
	```

- Compile e.g.: 

	```text
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT)
	```

4. 
	
	```text
	#include "../libft/lifbt.h"
	```

	can be included as header in any file requiring it (adapt path as needed) - if called it will use the functions from the libft.a library

5. If you decide to alter any functions in the library dont forget to adapt the library Makefile and to run:

```bash
re
```

6. You can also clean the .o file:

```bash
clean
```

7. And finally to clean both .o files and the ex .a;

```bash
fclean
```

## Resources

##### 42:
- `libft.pdf` version: 19.3

##### System:
- Linux man for the libc related functions

##### Github:

###### Before beginning of cursus: 
- https://github.com/mrochedy/42-Libft/tree/main

##### Other:
- [Markdown List Syntax](https://www.markdownlang.com/basic/lists.html) - To learn MD syntax

##### AI:

###### Before beginning of cursus
- Perplexity: 
	1. A quick search to understand how to actually use the libft library in future projects.
	2. Confirm what certain Markdown syntax I found in repos do.

## Detailed description

#### List of all the available functions:

##### Part 1: Libc replica

- `ft_isprint`: Checks for  any  printable  character  including space.
- `ft_isascii`: Checks if a given int c is a 7-bit unsigned char value that fits inside the ASCII characters set.
- `ft_isalpha`: Checks for an alphabetic character: 'A' through 'Z' and 'a' through 'z'.
- `ft_isdigit`: Checks for a digit: '0' through '9'.
- `ft_isalnum`: Checks for  an  alphanumeric  character; it  is equivalent to (ft_isalpha(int c) || ft_isdigit(int c)).

- `ft_tolower`: If c is an uppercase letter, returns its lowercase equivalent, if a lowercase representation exists in  the  current locale. Otherwise, it returns c.
- `ft_toupper`: If c is an lowercase letter, returns its uppercase equivalent, if a uppercase representation exists in  the  current locale. Otherwise, it returns c.
- `ft_atoi`: Converts a given char to int, epuring spaces and accounting for max 1 occurence of + || - sign.

- `ft_strlen`:  Returns the length of the given char *s.
- `ft_strlcpy`: Copy src into dest and return the len of the wanted result (len of src).
- `ft_strlcat` : Return the total length of the attempted concatenation, strlen(dst) + strlen(src) if successful or size + strlen(src) if the buffer dst has no '\0' char within size bytes which does not result in a concatenation.
- `ft_strncmp`: Returns the difference of value between the char in same index of 's1' and 's2' maximum of 'n' len or before 'NULL' char
- `ft_strnstr`:  Locates the first occurrence of the null-terminated string 'little' in the string 'big', where not more than 'len' characters are searched. Characters that appear after a '\0' character are not searched. 
- `ft_strchr`:  Return a pointer to the first matched character or NULL  if the character is not found.  The terminating null byte is considered part of the string, so that if c is specified as '\0', this function return a pointer to the terminator.
- `ft_strrchr`:  Return a pointer to the last matched character or NULL  if the character is not found.  The terminating null byte is considered part of the string, so that if c is specified as '\0', this function return a pointer to the terminator.

- `ft_bzero`:  Fills the given array up to index 'len' with '\0' char.
- `ft_memchr`:  Returns the address of the given 'int c' char if found in the given array.
- `ft_memcmp`:  Returns the result of comparing the bytes value up to 'n' number of bytes.
- `ft_memcpy`:  Returns a pointer to the given 'dest' array after copying 'n' bytes 
values from 'src'. Does not account for overlap in memory.
- `ft_memmove`:  Returns a pointer to the given 'dest' array after copyig 'n' len of bytes from 'src' in it, accounting that overlap does not affect the data unlike memcpy.
- `ft_memset`:  Returns the given 's' array filled with the 'c' char up to 'n' bytes.

- `ft_calloc`: Return an initialised 'malloced' array filled with 0 up to len 'n'.
- `ft_strdup`: Returns an array with the og 's' string dupped in it (copied) but in the heap 
instead of the stack, using malloc.

##### Part 2: Additional functions

- `ft_substr` : ...
- `ft_strjoin` : ...
- `ft_strtrim` : ...
- `ft_split` : ...

- `ft_itoa` : ...

- `ft_strmapi` : ...
- `ft_striteri` : ...

- `ft_putchar_fd` : ...
- `ft_putstr_fd` : ...
- `ft_putendl_fd` : ...
- `ft_putnbr_fd` : ...

##### Part 3: Linked list related

- [ ] Coming soon...
