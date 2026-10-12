
#include <stdlib.h>

char *ft_strdup(const char *s)
{
    char    *dest;
    int     len;
    int     i;

    if (!s)
        return (NULL);
    len = ft_strlen(s);
    dest = malloc(len + 1);
    if (!dest)
        return (NULL);
    i = 0;
    while (s[i])
    {
        dest[i] = s[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int ft_strlen(const char *s)
{
    int len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}