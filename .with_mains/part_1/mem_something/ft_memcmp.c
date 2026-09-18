/**
 * @author TomSwb
 * @version 0.1
 * @date 2026-08-26
 */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	char	*s1;
	char	*s2;
	size_t	n;

	s1 = "Hell";
	s2 = "Hello";
	n = 5;
	printf("ft: %d\n", ft_memcmp(s1, s2, n));
	printf("og: %d", memcmp(s1, s2, n));
}

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	unsigned char const	*str1;
	unsigned char const	*str2;

	str1 = s1;
	str2 = s2;
	while (n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
