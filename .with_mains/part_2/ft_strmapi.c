
#include <stdio.h>
#include <stdlib.h>

char  *ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t ft_strlen(chat const *s);
char ft_toupper(unsigned int i, char c);

int main(void)
{
    char const s[6] = "hello";
    char const *result;
    
    printf("s = %s\n", s);
    result = ft_strmapi(s, ft_toupper);
    printf("result = %s\n", result);
    free(result);
}

char  *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t len;
    char *result;
    size_t i;
    
    len = ft_strlen(s);
    result = malloc(len + 1);
    if (!result)
        return (NULL);
    i = 0;
    while (s[i])
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return (result);
}

size_t ft_strlen(chat const *s)
{
    size_t len;
    
    len = 0;
    while (s[len])
        len++;
    return (len);
}

char ft_toupper(unsigned int i, char c)
{
    
}
