
#include <stdio.h>

char  *ft_strmapi(char const *s, char (*f)(unsigned int, char));

int main(void)
{
    char const s[6] = "hello";
    char const *result;
    
    printf("s = %s\n", s);
    result = ft_strmapi(s, ft_capitlize());
    printf("result = %s\n", result);
}