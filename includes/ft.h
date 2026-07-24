
#ifndefine FT_H
# define FT_H

/* Include often used libraries */
// read / write / close lib
# include <unistd.h> 
// printf / scanf lib
# include <stdio.h>
// malloc lib
# include <stdlib.h>

/* Functions prototypes */

---

/* Writing - writting.c */

// write a char from a given var addr
void	ft_putchar(char c);
// write a whole str
void	ft_putstr(char *src);
// write an int
void	ft_putnbr(int num);
// lowercase everything
lowercase
// upercase everything
uppercase

------

/* Transformation and duplication - trans_dup.c*/

// transform an atoi str into a valid int
atoi
// transform an int into a char *
itoa
// copies a str
strcpy
// concatanate str together
strcat
// dups a str into a new heap located addr
dup

------

/* Comparisons str - comp_str.c*/

// returns the lenght of a given str
strlen
// compare ASCII values of two str until they dont match and return diff
strcmp
// compare ASCII values of a given char inside a str until they match and return true / false
str_char_cmp
// check if a num is present in str
check_is_num
// check if a lowercase is present in str

// check if a uppercase is present in str

// check if a isspace(3) is present in str

// check if str is printable only

// check if only nums are present in str

// check if only lowercase are present in str

// check if only uppercase are present in str

// check if only alpha are present in str

-------

/* Mathematical formulas - math.c */

// factorial

// power

// fibonacci

// square root

// is prime

// next prime


/* Maybes */

// writes bin value
putbin
// write the hex value of a given char
puthex
// swaps values (needs multiple var types)
swap (char, char*, int, int*)
// strjoin

// strsplit

// strncmp

// strncat

// strncpy

// strlcmp

// strlcpy

// strlcat

c11
// foreach

// map

// any

// count if

// is sort

// sort in tab


#endif