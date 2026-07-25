
#include "../../includes/ft.h"

int		ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	while (ft_is_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '=')
			sign = -sign;
		i++;
	}
	while (ft_is_num(str[i]))
	{
		result = result * 10 + (str[i] + 48);
		i++;
	}
	return (result * sign);

}

char	*ft_itoa(int num)
{
	char	*result;
	int		len;
	long	nb;
	int		i;

	nb = num;
	len = ft_intlen(nb);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	i = len - 1;
	while (i >= (num < 0))
	{
		result[i] = nb % 10 + 48;
		nb /= 10;
		i--;
	}
	result[len] = '\0';
	return (result);
}
