
#ifndef FT_H
# define FT_H

/* Include often used libraries */
// read / write / close lib
# include <unistd.h> 
// printf / scanf lib
# include <stdio.h>
// malloc lib
# include <stdlib.h>

/* Writing - writting.c */

// write a char from a given var addr
void	ft_putchar(char c);
// write a whole str
void	ft_putstr(char *src);
// write an int
void	ft_putnbr(int num);

/* Transformation and duplication - trans_dup.c*/

// lowercase everything
char    *ft_lower_all(char *str);
// upercase everything
char    *ft_upper_all(char *str);
// transform an atoi str into a valid int
int		ft_atoi(char *str);
// transform an int into a char *
char	*ft_itoa(int num);
// copies a str
char	*ft_strcpy(char *str);
// concatanate str together
char	*ft_strcat(char *s1, char *s2);
// dups a str into a new heap located addr
char	*ft_dup(char *str);

/* Comparisons str - comp_str.c*/

// returns the lenght of a given str
int		ft_strlen(char *str);
// compare ASCII values of two str until they dont match and return diff
int		ft_strcmp(char *s1, char *s2);
// compare ASCII values of a given char inside a str until they match and return true / false
int		ft_find_char(char *s1, char c);
// check if a num is present in str
int		ft_has_num(char *str);
// check if a lowercase is present in str
int		ft_has_lower(char *str);
// check if a uppercase is present in str
int		ft_has_upper(char *str);
// check if a isspace(3) is present in str
int		ft_has_isspace(char *str);
// check if str is printable only
int		ft_is_printable_only(char *str);
// check if only nums are present in str
int		ft_is_num_only(char *str);
// check if only lowercase are present in str
int		ft_is_lower_only(char *str);
// check if only uppercase are present in str
int		ft_is_upper_only(char *str);
// check if only alpha are present in str
int		ft_is_alpha_only(char *str);

/* Mathematical formulas - math.c */

// factorial
int		ft_rec_factorial(int num, int fact);
// power
int		ft_rec_power(int num, int power);
// fibonacci
int		ft_fibonacci(int num);
// square root
int		ft_square_root(int num);
// is prime
int		ft_is_prime(int num);
// next prime
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

//foreach

// map

// any

// count if

// is sort

// sort in tab


#endif