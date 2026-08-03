/**
 * @author TomSwb
 * @version 0.1
 * @date 2026-08-03
 */

 #include <stdio.h>
 #include <ctype.h>

 int	ft_toupper(int c);

 int	main(int ac, char **av)
{
	int	c;

	if (ac > 1)
		c = av[1][0];
	else
	 	(void) ac;
	printf("ft: %d\n", ft_toupper(c));
	printf("OG: %d", toupper(c));
}

/**
 * @brief 
   If c is a lowercase letter, toupper() returns  its  uppercase  equivalent, 
   if an uppercase representation exists in the current locale.  
   Otherwise, it  returns  c.
 * 
 * @param int c
 * @return int 
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}