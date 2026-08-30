/**
* @author TomSwb

* @version 0.1
* @date 2026-08-29
*/

#include <stddef.h>
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n);


int	main(void)
{
	char	src1[] = "World";
	char	src2[] = "World";
	char	*ft_dest = &src1[1];
	char	*og_dest = &src2[1];
	size_t	n = sizeof(src1) - 1;
	size_t	i;

	ft_memmove(ft_dest, src1, n);
	memmove(og_dest, src2, n);

	i = 0;
	while (i < sizeof(src1))
	{
		printf("byte %zu: ft=%d | std=%d\n",
			i, (unsigned char)src1[i], (unsigned char)src2[i]);
		i++;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*u_dest;
	unsigned char	*u_src;
	size_t	i;

	u_dest = (unsigned char *)dest;
	u_src = (unsigned char *)src;
	if (n == 0)
		return (dest);
	i = 0;
	while (n > 0)
	{
		if (u_dest < u_src)
		{
			u_dest[i] = u_src[i];
			i++;
		}
		else
			u_dest[n - 1] = u_src[n - 1];
		n--;
	}
	return (dest);
}
