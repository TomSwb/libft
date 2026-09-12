
#include <stsio.h>

void  ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_toupper_odd(unsigned int i, char *s);

int main(void)
{
    char s[6] = "Hello";
    
    printf("s = %s", s);
    ft_striteri(s, ft_toupper_odd);
    printf("s = %s", s);
}

void  ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;
    
    i = 0;
    while(s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

void ft_toupper_odd(unsigned int i, char *s)
{
    if (*s >= 'a' && *s <= 'z' && i % 2 != 0)
        *s = *s - 32;
}
