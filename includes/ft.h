
#ifndef FT_H
# define FT_H

/* Include often used libraries */
// read / write / close lib
# include <unistd.h> 
// printf / scanf lib
# include <stdio.h>
// malloc lib
# include <stdlib.h>

/* Writing */

// write a char from a given var addr - writting.c 
void	ft_putchar(char c);
// write a whole str - writting.c 
void	ft_putstr(char *src);
// write an int - writting.c 
void	ft_putnbr(int num);

/* Comparisons str - comp_str.c*/

// check if a char is printable - comp_str1.c
int		ft_is_non_printable(char c);
// check if a char is num - comp_str1.c
int		ft_is_num(char c);
// check if a char is lower - comp_str1.c
int		ft_is_lower(char c);
// check if a char is upper - comp_str1.c
int		ft_is_upper(char c);
// check if a char is isspace char - comp_str1.c
int		ft_is_isspace(char c);

// check if a non-printable is present in str - comp_str2.c
int		ft_has_non_printable(char *str);
// check if a num is present in str - comp_str2.c
int		ft_has_num(char *str);
// check if a lowercase is present in str - comp_str2.c
int		ft_has_lower(char *str);
// check if a uppercase is present in str - comp_str2.c
int		ft_has_upper(char *str);
// check if a isspace(3) is present in str - comp_str2.c
int		ft_has_isspace(char *str);

// returns the lenght of a given str - comp_str3.c
int		ft_strlen(char *str);
// returns the lenght of a given int - comp_str3.c
int		ft_intlen(long nb);
// compare ASCII values of two str until they dont match and return diff - comp_str3.c
int		ft_strcmp(char *s1, char *s2);
// check if a char is present in str and return true / false - comp_str3.c
int		ft_find_char(char *str, char c);
// compare ASCII values of a given char inside a str and if true return index - comp_str3.c
int		ft_find_char_i(char *str, char c);


/* Transformation and duplication */

// lowercase everything - trans_str1.c
char    *ft_lower_all(char *str);
// upercase everything - trans_str1.c
char    *ft_upper_all(char *str);
// copies a str - trans_str1.c
char	*ft_strcpy(char *str);
// concatanate str together - trans_str1.c
char	*ft_strcat(char *s1, char *s2);
// dups a str into a new heap located addr - trans_str1.c
char	*ft_dup(char *str);

// transform an atoi str into a valid int - trans_str2.c
int		ft_atoi(char *str);
// transform an int into a char* - trans_str2.c
char	*ft_itoa(int num);


/* Mathematical formulas */

// factorial - math1.c
int		ft_rec_factorial(int num);
// power - math1.c
int		ft_rec_power(int num, int power);
// fibonacci - math1.c
int		ft_fibonacci(int num);
// square root - math1.c
int		ft_square_root(int num);
// is prime - math2.c
int		ft_is_prime(int num);
// next prime - math2.c
int		ft_find_next_prime(int num);

/* Maybes */

// writes bin value

// write the hex value of a given char

// swaps values (needs multiple var types)

// strjoin

// strsplit

// strncmp

// strncat

// strncpy

// strlcmp

// strlcpy

// strlcat

// foreach

// map

// any

// count if

// is sort

// sort in tab


#endif