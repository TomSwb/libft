
#include <stdlib.h>
#include <stdio.h>

char  *ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);

int	main(void)
{
	const char	s[] = "Hello World";
	unsigned int	start = 6;
	size_t	len = 5;

	printf("s = %s\n", s);
	printf("result = %s", ft_substr(s, start, len));
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	s_s;

	if (!s)
		return (NULL);
	s_s = ft_strlen(s);
	if (start >= s_s)
		len = 0;
	else if (len > s_s - start)
		len = s_s - start;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
