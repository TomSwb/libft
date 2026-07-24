
#include "ft.h"

void	ft_putstr(char *src)
{
	int 	i;
	
	i = 0;
	while (src[i])
	{
		ft_putchar(src[i]);
		i++;
	}
}