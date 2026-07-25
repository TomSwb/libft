
#include "../includes/ft.h"

int	ft_has_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_non_printable(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_has_num(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_num(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_has_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_lower(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_has_upper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_upper(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_has_isspace(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_isspace(str[i]))
			return (1);
		i++;
	}
	return (0);
}