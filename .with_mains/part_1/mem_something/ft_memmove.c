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
	char	ft_dest[] = "Hello";
	char	og_dest[] = "Hello";
	char	src[] = "World";
	size_t	n = sizeof(ft_dest);
	void	*ft_result;
	void	*og_result;

	ft_result = ft_memmove(ft_dest, src, n);
	og_result = memmove(og_dest, src, n);
	printf("ft: %s | result: %p | ft_dest: %p", ft_dest, ft_result, (void *)ft_dest);
	printf("OG: %s | result: %p | og_dest: %p", og_dest, og_result, (void *)og_dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*temp;
	unsigned char		*u_dest;
	const unsigned char	*u_src;
	size_t	i;

	u_dest = (unsigned char *)dest;
	u_src = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		temp[i] = u_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		u_dest[i] = temp[i];
		i++;
	}
	return (dest);
}
