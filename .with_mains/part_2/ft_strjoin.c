
#include <stdlib.h>
#include <stdio.h>

char  *ft_strjoin(char const *s1, char const *s2);

int	main(void)
{
	char const	s1[7] = "Hello ";
	char const	s2[6] = "World";

	printf("s1 = %s, s2 = %s\n", s1, s2);
	printf("result = %s", ft_strjoin(s1, s2));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;

	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
}
