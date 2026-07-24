
#include "ft.h"

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