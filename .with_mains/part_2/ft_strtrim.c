
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strchr(char const *s, int c);
size_t	ft_strlen(char const *s);

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
	char	*result;
	size_t	end;
	size_t	start;

	start = 0;
	while (ft_strchr(set, s1[start]) != NULL)
		start++;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[end]) != NULL && *set)
			end--;
	result = malloc(end - start + 1);
	if (!result)
		return (NULL);
	while (start <= end)
	{
		result[start] = s1[start];
		start++;
	}
	result[start] = '\0';
	return (result);
}
