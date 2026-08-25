/**
* @author TomSwb
* @version 0.1
* @date 2026-08-21
*/

#include <stdio.h>
#include <string.h>

char  *ft_strrchr(const char *s, int c);

int  main(int ac, char **av)
{
	char  *s;
	int    c;

	if (ac > 2)
	{
		s = av[1];
		c = av[2][0];
	}
	else
		return (-1);
	printf("FT: %s\n", ft_strrchr(s, c));
	printf("OG: %s\n", strrchr(s, c));
}
/**
* @brief 
The strrchr() functions return a pointer to the last matched character 
or NULL  if the character is not found.  The terminating null byte is 
considered part of the string, so that if c is specified as '\0', 
this function return a pointer to the terminator.

* @param s 
* @param c 
* @return char* 
*/

char  *ft_strrchr(const char *s, int c)
{
	char *ptr;

	ptr = NULL;
	c = (char)c;
	while (*s)
	{
		if (*s == c)
			ptr = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (ptr);
}
