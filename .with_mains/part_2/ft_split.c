
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

char  **ft_split(char const *s, char c);
static size_t ft_word_count(char const *s, char c);

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
    char **result;
    size_t i;
    
    if (!s)
        return (NULL);
    result = ft_calloc(ft_word_count(s, c) + 1, sizeof(char *));
    if (!result)
        return (NULL);
    result = ft_extract_words(s, c);
    return (result);
}

static size_t ft_word_count(char const *s, char c)
{
    size_t flag;
    size_t word_count;
    size_t i;
    
    flag = 1;
    word_count = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] != c && flag == 1)
        {
            flag = 0;
            word_count++;
        }
        else if (s[i] == c && flag == 0)
            flag = 1;
        i++;
    }
    return (word_count);
}

static char **ft_extract_words(char const *s, char c)
{
    ...
}