/**
 * @author TomSwb
 * @version 0.1
 * @date 2026-08-12
 */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);

int	main(int ac, char **av)
{
	char	*s;

	if (ac > 1)
		s = av[1];
	else
		(void) ac;
	printf("ft: %zu\n", ft_strlen(s));
	printf("OG: %zu", strlen(s));
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
