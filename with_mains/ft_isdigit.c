
#include <stdio.h>

int	ft_isdigit(int c);

int	main(int ac, char **av)
{
	int	c;

	c = av[1][0];
	(void) ac;
	printf("%d", ft_isdigit(c));
}


int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}