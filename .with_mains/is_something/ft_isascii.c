/**
 * @author TomSwb
 * @version 0.1
 * @date 2026-08-03
 */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c);

int	main(int ac, char **av)
{
	int	c;
	int	i;

	if (ac > 1)
		c = av[1][0];
	else
	 	(void) ac;
	printf("ft: %d\n", ft_isascii(c));
	printf("OG: %d\n", isascii(c));
	i = 127;
	/* Test against non-ascii value */
	// while (i <= 128)
	// {
	// 	printf("i = %d\n", i);
	// 	printf("ft: %d\n", ft_isascii(i));
	// 	printf("OG: %d\n", isascii(i));
	// 	i++;
	// }
}
/**
 * @brief 
	Checks if a given int c is a 7-bit unsigned char value
	that fits inside the ASCII chararcter set

 * @param c 
 * @return int 
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}