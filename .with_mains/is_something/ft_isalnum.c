/**
 * @author TomSwb
 * @version 0.1
 * @date 2026-08-03
 */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c);

int	main(int ac, char **av)
{
	int	c;

	if (ac > 1)
		c = av[1][0];
	else
	 	(void) ac;
	printf("ft: %d\n", ft_isalnum(c));
	printf("OG: %d", isalnum(c));
}
/**
 * @brief 
	Checks for  an  alphanumeric  character;  it  is
	equivalent to (isalpha(c) || isdigit(c)).

 * @param c 
 * @return int 
 */
int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z') ||
		(c >= '0' && c <= '9'))
		return (1);
	return (0);
}