/**
 * @author TomSwb
 * @version 0.1
 * @date 2026-08-30
 */

#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

void	*ft_calloc(size_t n, size_t size);

int	main(void)
{
	ft_calloc(5, 5);
	calloc(5, 5);
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
