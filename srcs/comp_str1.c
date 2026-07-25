
#include "../includes/ft.h"

int		ft_is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		ft_is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}