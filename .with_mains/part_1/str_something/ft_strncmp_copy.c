/**
* @author TomSwb
* @version 0.1
* @date 2026-08-25
*/

#include <stddef.h>
#include <stdio.h>
#include <string.h>

int  ft_strncmp(const char *s1, const char *s2, size_t n);

int main(void)
{
    const char *s1 = "\xC8";  // 200
    const char *s2 = "\x64";  // 100
    int r = ft_strncmp(s1, s2, 1);
	int r2 = strncmp(s1, s2, 1);

	if (r > 0)
		printf("PASS: ft_strncmp returned positive as expected\n");
	else
		printf("FAIL: ft_strncmp returned %d (expected > 0)\n", r);

	if (r2 > 0)
		printf("PASS: strncmp returned positive as expected\n");
	else
		printf("FAIL: strncmp returned %d (expected > 0)\n", r2);

    return (r > 0) ? 0 : 1;
}

int  ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t  i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
