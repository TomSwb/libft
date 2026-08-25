/**
* @author TomSwb
* @version 0.1
* @date 2026-08-25
*/

#include <stddef.h>
#include <stdio.h>
#include <string.h>

int  ft_strncmp(const char *s1, const char *s2, size_t n);

int  main(int ac, char **av)
{
	const char  *s1;
	const char  *s2;
	size_t  n;

	n = 5;
	if (ac == 3)
	{
		s1 = av[1];
		s2 = av[2];
	}
	else
		return (-1);
	printf("FT: %d\n", ft_strncmp(s1, s2, n));
	printf("OG: %d\n", strncmp(s1, s2, n));
}

int  ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t  i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
