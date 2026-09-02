
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char const	s1[25] = "Hello World How are you?";
	char const	set[5] = "eoau";
	char	*result;

	result = ft_strtrim(s1, set);
	printf("s1 = %s, set = %s\n", s1, set);
	printf("result = %s", result);
	free(result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	
}
