### ⚠️ Currently being build, this repo includes my test files and todos

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

3. Place them into a ./libft subfolder inside your project.

4. Makefile:
- Add this flag to your compiling: -I./libft
- Add this var: LIBFT = ./libft/libft.a
- Compile e.g. : $(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT)

5. #include "../libft/lifbt.h" can be included as header in any file requiring it (adapt path as needed) - if called it will use the functions from the libft.a library

6. If you decide to alter any functions in the library dont forget to adapt the library Makefile and to run:

```bash
re
```

7. You can also clean the .o file:

```bash
clean
```

8. And finally to clean both .o files and the ex .a;

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

###### Libc replica:

- `ft_isprint`: Checks for  any  printable  character  including space.
- `ft_isascii`: Checks if a given int c is a 7-bit unsigned char value that fits inside the ASCII characters set.
- `ft_isalpha`: Checks for an alphabetic character: 'A' through 'Z' and 'a' through 'z'.
- `ft_isdigit`: Checks for a digit: '0' through '9'.
- `ft_isalnum`: Checks for  an  alphanumeric  character; it  is equivalent to (ft_isalpha(int c) || ft_isdigit(int c)).

- `ft_tolower`: If c is an uppercase letter, returns its lowercase equivalent, if a lowercase representation exists in  the  current locale. Otherwise, it returns c.
- `ft_toupper`: If c is an lowercase letter, returns its uppercase equivalent, if a uppercase representation exists in  the  current locale. Otherwise, it returns c.

###### Additional functions:

- [ ] Coming soon...

###### Linked list related:

- [ ] Coming soon...
