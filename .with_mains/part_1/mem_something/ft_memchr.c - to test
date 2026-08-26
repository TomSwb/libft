/**
 * @author TomSwb
 * @version 0.1
 * @date 2026-08-25
 */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(int ac, char **av)
{
	unsigned char	buf[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'k', 'l'};
	int				c;
	size_t			n;

	n = 5;
	if (ac == 2)
		c = av[1][0];
	else
		return (-1);
	printf("FT: %c found\n", ft_memchr(buf, c, n));
	printf("OG: %c found\n", memchr(buf, c, n));
	return (0);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		u_c;
	const unsigned char	*u_s;

	i = 0;
	u_c = (unsigned char)c;
	u_s = (unsigned char *)s;
	while (i < n)
	{
		if (u_s[i] == u_c)
			return ((void *)&u_s[i]);
		i++;
	}
	return (NULL);
}
