
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <limits.h>

char  *ft_itoa(int n);
int ft_int_len(long long num);

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
    size_t sign;
    long long num;
    
    num = n;
    len = ft_int_len(num);
    result = malloc(len + 1);
    if (!result)
        return (NULL);
    sign = 0;
    if (num < 0)
    {
        num = -num
        result[0] = '-';
        sign = 1;
    }
    i = len - 1;
    while (i >= sign)
    {
        result[i--] = num % 10 + 48;
        num = num / 10;
    }
    result[len + 1] = '\0';
    return (result);
}

int ft_int_len(long long num)
{
    int count;
    
    count = 0;
    if (num <= 0)
    {
        count++;
        num = -num;
    }
    while (num > 0)
    {
        count++;
        num /= 10;
    }
    return (count);
}