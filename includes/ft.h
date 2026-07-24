
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

/* Writing */

// write a char from a given var addr
void	ft_putchar(char c);
// write a whole str
void	ft_putstr(char *src);
// write an int
void	ft_putnbr(int num);
// write the hex value of a given char
puthex
// lowercase everything
lowercase
// upercase everything
uppercase

------

/* Transformation and duplication */

// transform an atoi str into a valid int
atoi
// transform an int into a char *
itoa
// dups a str into a new heap located addr
dup

------

/* Comparisons & char* utilities */

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


#endif