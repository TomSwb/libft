/**
 * @author TomSwb
 * @version 0.1
 * @date 2026-08-30 
 */


#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s);

int main(void)
{
    const char s[] = "Hello";
    char *ft_dest;
    char *og_dest;
    
    printf("s = %s, addr = %p\n", s, &s);
    printf("ft = addr = %p\n", &ft_dest);
    printf("og = addr = %p\n", &og_dest);
    ft_dest = ft_strdup(s);
    og_dest = strdup(s);
    printf("ft = %s, addr = %p\n", ft_dest, &ft_dest);
    printf("og = %s, addr = %p\n", og_dest, &og_dest);
}

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dest;
	int		i;

	len = 0;
	while (s[len])
		len++;
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
