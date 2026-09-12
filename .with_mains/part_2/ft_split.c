
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

char  **ft_split(char const *s, char c);
static size_t ft_word_count(char const *s, char c);
void *ft_calloc(size_t n, size_t size);
static char *ft_extract_words(char const *s, char c, size_t *ptr);
char *ft_substr(char const *s, unsigned int start, size_t len);
size_t ft_strlen(char const *s);
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

void *ft_calloc(size_t n, size_t size)
{
    char *result;
    size_t i;
    
    result = malloc(n * size);
    if (!result)
        return (NULL);
    i = 0;
    while (result[i])
    {
        result[i] = '\0';
        i++;
    }
    return (result);
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
    char *result;
    size_t i;
    size_t s_s;
    
    if (!s)
        return (NULL);
    s_s = ft_strlen(s);
    if (start >= s_s)
        len = 0;
    else if (len > s_s - start)
        len = s_s - start;
    result = malloc(len + 1);
    if (!result)
        return (NULL);
    i = 0;
    while (i < len)
    {
        result[i] = s[start + i];
        i++;
    }
    result[i] = '\0';
    return (result);
}

size_t ft_strlen(char const *s)
{
    size_t len;
    
    len = 0;
    while (s[len])
        len++;
    return (len);
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