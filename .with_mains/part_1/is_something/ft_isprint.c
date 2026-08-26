/**
 * @author TomSwb
 * @version 0.1
 * @date 2026-08-03
 */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c);

int	main(int ac, char **av)
{
	int	c;

	if (ac > 1)
		c = av[1][0];
	else
	 	(void) ac;
	printf("ft: %d\n", ft_isprint(c));
	printf("OG: %d", isprint(c));
}

/**
 * @brief 
	Checks for  any  printable  character  including
    space.

 * @param c 
 * @return int 
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
