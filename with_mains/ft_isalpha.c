
#include <stdio.h>

int	ft_isalpha(int c);

int	main(int ac, char **av)
{
	int	c;
	
	c = av[1][0];
	(void) ac;
	printf("%d", ft_isalpha(c));
}

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}