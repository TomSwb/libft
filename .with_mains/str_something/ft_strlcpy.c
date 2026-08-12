/**
 * @author TomSwb
 * @version 0.1
 * @date 2026-08-12
 */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dest, const char *src, size_t dsize);

int	main(int ac, char **av)
{
	char	*dest;
	char	*src;
	size_t	dsize;

	if (ac > 2)
	{
		dest = av[1];
		src = av[2];
		dsize = 0;
		while (dest[dsize])
			dsize++;
	}
	else
		(void) ac;
	printf("Dest = av[1]: %s, ", dest);
	printf("Src = av[2]: %s\n", src);
	printf("ft: %zu\n", ft_strlcpy(dest, src, dsize));
	printf("Dest after cpy: %s\n", dest);
	printf("OG (src = Hello): %zu\n", strlcpy(dest, "Hello", dsize));
	printf("Dest after cpy: %s\n", dest);
}

size_t ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	result;
	size_t	len;

	result = 0;
	while (src[result])
		result++;
	len = 0;
	while (len < dsize)
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (result);
}

