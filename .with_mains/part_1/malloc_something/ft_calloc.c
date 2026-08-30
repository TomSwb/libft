/**
 * @author TomSwb
 * @version 0.1
 * @date 2026-08-30
 */

#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	*ft_calloc(size_t n, size_t size);

int	main(void)
{
	unsigned int	*ft_result;
	unsigned int	*og_result;
	size_t	n;
	size_t	size;
	size_t	i;
	
	ft_result = NULL;
	og_result = NULL;
	n = 5;
	size = sizeof(unsigned int);
	i = 0;
	printf("\nBefore:\n");
	printf("ft: %p, %p\n", &ft_result, ft_result);
	printf("og: %p, %p\n", &og_result, og_result);
	ft_result = ft_calloc(n, size);
	og_result = calloc(n, size);
	printf("\nAfter:\n");
	printf("ft: %p\n", &ft_result);
	while (i < n)
	{
		printf("%zu = %d, ", i, ft_result[i]);
		i++;
	}
	i = 0;
	printf("\nog: %p\n", &og_result);
	while (i < n)
	{
		printf("%zu = %d, ", i, og_result[i]);
		i++;
	}
	printf("\n\n");
	free(ft_result);
	free(og_result);
}

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*array;
	void			*empty;
	size_t			i;

	if (n == 0 || size == 0)
	{
		empty = malloc(0);
		return (empty);
	}
	if (n > SIZE_MAX / size)
		return (NULL);
	array = malloc(size * n);
	if (!array)
		return (NULL);
	i = 0;
	while (i < (n * size))
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
