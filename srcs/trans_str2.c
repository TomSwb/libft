
#include "../includes/ft.h"

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
			sign -= sign;
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
	
}
