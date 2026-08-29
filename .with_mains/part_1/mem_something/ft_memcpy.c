/**
* @author TomSwb

* @version 0.1
* @date 2026-08-29
*/

#include <stddef.h>
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	char	ft_dest[] = "World";
	char	og_dest[] = "World";
	char	src[] = "Hello";
	size_t	n = sizeof(ft_dest);
	void	*ft_return;
	void	*og_return;

	ft_return = ft_memcpy(ft_dest, src, n);
	og_return = memcpy(og_dest, src, n);
	printf("ft: %s | return: %p | dest: %p\n", ft_dest, ft_return, (void *)ft_dest);
	printf("og: %s | return: %p | dest: %p\n", og_dest, og_return, (void *)og_dest);
	
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*u_dest;
	const unsigned char	*u_src;

	u_dest = (unsigned char *)dest;
	u_src = (const unsigned char *)src;
	while (n > 0)
	{
		*u_dest = *u_src;
		u_dest++;
		u_src++;
		n--;
	}
	return (dest);
}
