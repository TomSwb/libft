/**
* @author TomSwb
* @version 0.1
* @date 2026-08-25
*/

#include <stddef.h>
#include <stdio.h>
#include <bsd/string.h>

char  *ft_strnstr(const char *big, const char *little, size_t len);

int  main(int ac, char **av)
{
  const char  *big;
  const char  *little;
  size_t      len;

  len = 9;
  if (ac >= 2)
  {
    big = av[1];
    little = av[2];
  }
  else
    return (-1);
  printf("FT: %s\n", ft_strnstr(big, little, len));
  printf("OG: %s\n", strnstr(big, little, len));
}

char  *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t  i;
	size_t  j;

	if ((!big || !little) && !len)
		return ((char *)big);
	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && big[i + j] == little[j] && (i + j) < len)
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
