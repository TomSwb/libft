
#include <stdlib.h>
#include <stdio.h>

char  *ft_substr(char const *s, unsigned int start, size_t len);

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

	result = malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		result[i] = s[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
