
#include <stdlib.h>
#include <stdio.h>

char  *ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(char const *s);

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
	size_t i;

	s_s1 = ft_strlen(s1);
	s_s2 = ft_strlen(s2);
	result = malloc(s_s1 + s_s2 + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		result[s_s1 + i] = s2[i];
		i++;
	}
	result[s_s1 + i] = '\0';
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
