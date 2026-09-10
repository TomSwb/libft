
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strchr(char const *s, int c);
size_t	ft_strlen(char const *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strdup(char *s);

int	main(void)
{
	char const	s1[25] = "Hello World How are you?";
	char const	set[7] = "eolHau";
	char	*result;

	result = ft_strtrim(s1, set);
	printf("s1 = %s, set = %s\n", s1, set);
	printf("result = %s", result);
	free(result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	start;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(s1 + start));
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	len = (end - start) + 1;
	return (ft_substr(s1, start, len));
}
