
#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_putnbr(int num)
{
	long	nb;

	nb = num;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + 48);
}