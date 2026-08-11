/**
 * @author TomSwb
 * @version 0.1
 * @date 2026-08-11
 */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr);

int	main(int ac, char **av)
{
	char	*nptr;

	if (ac > 1)
		nptr = av[1];
	else
		(void) ac;
	printf("ft: %d\n", ft_atoi(nptr));
	printf("OG: %d", atoi(nptr));
}

int	ft_atoi(const char *nptr)
{
	int	result;
	int	i;
	int	sign;
	int	count;

	sign = 1;
	while (nptr[i] == 32 
		|| nptr[i] >= 9 && nptr[i] <= 13)
		i++;
	count = 0;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}