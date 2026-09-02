
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char  *ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(char const *s);
size_t ft_strlcpy(char *dest, const char *src, size_t dsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

int	main(void)
{
	char const	s1[7] = "Hello ";
	char const	s2[6] = "World";
	char	*result;

	result = ft_strjoin(s1, s2);
	printf("s1 = '%s', s2 = '%s'\n", s1, s2);
	printf("result = '%s'", result);
	free(result);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	s_s1;
	size_t	s_s2;
	size_t	size;

	if (!s1 || !s2)
		return (NULL);
	s_s1 = ft_strlen(s1);
	s_s2 = ft_strlen(s2);
	size = s_s1 + s_s2 + 1;
	result = malloc(size);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, size);
	ft_strlcat(result, s2, size);
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
	if (dsize == 0)
		return (result);
	len = 0;
	while (len < dsize - 1 && src[len])
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (result);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i_dest;
	size_t	i_src;
	size_t	len_src;

	i_src = 0;
	while (src[i_src]) 
		i_src++;
	len_src = i_src;
	i_dest = 0;
	while (i_dest < size && dst[i_dest])
		i_dest++;
	if (i_dest == size)
		return (size + i_src);
	i_src = 0;
	while (i_src < (size - 1) - i_dest && src[i_src])
	{
		dst[i_dest + i_src] = src[i_src];
		i_src++;
	}
	dst[i_dest + i_src] = '\0';
	return (i_dest + len_src);
}