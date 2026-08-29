/**
* @author TomSwb

* @version 0.1
* @date 2026-08-29
*/

#include <stddef.h>
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
	char	s1[] = "Hello";
	char	s2[] = "World";
	int		c = 97;
	size_t	n = 3;

	printf("Before: ft- %s, og- %s\n", s1, s2);
	ft_memset(s1, c, n);
	memset(s2, c, n);
	printf("After: ft- %s, og- %s\n", s1, s2);
}

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*u_s;
	unsigned char	u_c;

	u_c = (unsigned char)c;
	u_s = (unsigned char *)s;
	while (n > 0)
	{
		*u_s = u_c;
		u_s++;
		n--;
	}
	return (s);
}