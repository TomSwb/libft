
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <limits.h>

char  *ft_itoa(int n);

int main(void)
{
    //test 1
    int n = 0;
    //test 2
    //int n = INT_MAX;
    //test 3
    //int n = INT_MIN;
    //test 4
    //int n = 42;
    //test 5
    //int n = -42;
    
    char *result;
    result = ft_itoa(n);
    printf("n = %s", result);
    free(result);
}

char  *ft_itoa(int n)
{
    char *result;
    size_t len;
    size_t i;
    
    result = malloc(len + 1);
    if (!result)
        return (NULL);
    i = 0;
    if (n < 0)
    {
        result[i] = '-';
        i++;
    }
    result[len + 1] = '\0';
    while (len > i)
    {
        result[len] = n % 10 + 48;
        n = n / 10;
        len--;
    }
    return (result);
}
