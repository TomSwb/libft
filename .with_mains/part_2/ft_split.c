
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

char  **ft_split(char const *s, char c);
static size_t ft_word_count(char const *s, char c);
static char *ft_extract_words(char const *s, char c, size_t *ptr);
char *ft_substr(char const *s, unsigned int start, size_t len);
static void ft_free_ptr_arr(char **tab);

int  main(void)
{
    char const s[] = "hello,world,!,how,you,doing";
    char c = ",";
    char **result;
    int i;
    int j;
    
    printf("og s = %s\n", s);
    result = ft_split(s, c);
    if (!result)
        return (-1);
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
    ft_free_ptr_arr(result);
}

char  **ft_split(char const *s, char c)
{
    char **result;
    size_t word_count;
    size_t i;
    size_t pos;
    
    if (!s)
        return (NULL);
    word_count = ft_word_count(s, c);
    result = ft_calloc(word_count + 1, sizeof(char *));
    if (!result)
        return (NULL);
    i = 0;
    pos = 0;
    while (i < word_count)
    {
        result[i] = ft_extract_words(s, c, &pos);
        if (!result[i])
        {
            ft_free_ptr_arr(result);
            return (NULL);
        }
        i++;
    }
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

static char *ft_extract_words(char const *s, char c, size_t *ptr)
{
    unsigned int start_pos;
    size_t len;
    
    while (s[*ptr] && s[*ptr] == c)
        (*ptr)++;
    start_pos = *ptr;
    while (s[*ptr] && s[*ptr] != c)
        (*ptr)++;
    len = *ptr - start_pos;
    return (ft_substr(s, start_pos, len));
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    ...
}

static void ft_free_ptr_arr(char **tab)
{
    size_t i;
    
    i = 0;
    while (tab[i] != NULL)
    {
        free(tab[i]);
        i++;
    }
    free(tab);
}