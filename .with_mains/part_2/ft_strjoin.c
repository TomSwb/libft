
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char  *ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(char const *s);
size_t ft_strlcpy(char *dest, const char *src, size_t dsize);

int	main(void)
{
	char const	s1[7] = "Hello ";
	char const	s2[6] = "World";
	char	*result;

	result = ft_strjoin(s1, s2);
	printf("s1 = %s, s2 = %s\n", s1, s2);
	printf("result = %s", result);
	free(result);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	s_s1;
	size_t	s_s2;
	size_t	size;
//	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	s_s1 = ft_strlen(s1);
	s_s2 = ft_strlen(s2);
	size = s_s1 + s_s2 + 1;
	result = malloc(size);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, s_s1);
	// i = 0;
	// while (s1[i])
	// {
	// 	result[i] = s1[i];
	// 	i++;
	// }
	ft_strlcat();
	// i = 0;
	// while (s2[i])
	// {
	// 	result[s_s1 + i] = s2[i];
	// 	i++;
	// }
	result[size] = '\0';
	return (result);
}

size_t	ft_strlen(char const *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
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