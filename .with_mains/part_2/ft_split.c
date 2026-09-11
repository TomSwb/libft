
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char  **ft_split(char const *s, char c);

int  main(void)
{
    char const s[] = "hello,world,!,how,you,doing";
    char c = ",";
    char **result;
    int i;
    int j;
    
    printf("og s = %s\n", s);
    result = ft_split(s, c);
    i = 0;
    while (result[i] != NULL)
    {
        j = 0;
        while (result[i][j])
        {
            write(1, &result[i][j], 1);
            j++;
        }
        i++;
    }
    i = 0;
    while (result[i] != NULL)
    {
        free(result[i]);
        i++;
    }
    free(result);
}

char  **ft_split(char const *s, char c)
{
    ...
}