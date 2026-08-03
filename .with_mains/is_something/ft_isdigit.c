/**
 * @author TomSwb
 * @version 0.1
 * @date 2026-08-03
 */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c);

int	main(int ac, char **av)
{
	int	c;

	if (ac > 1)
		c = av[1][0];
	else
	 	(void) ac;
	printf("ft: %d\n", ft_isdigit(c));
	printf("OG: %d", isdigit(c));
}

/**
 * @brief 
	Checks for a digit (0 through 9).

 * @param c 
 * @return int 
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}