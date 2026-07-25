
#include "../includes/ft.h"

int	ft_is_non_printable(char c)
{
	if (c < 32 && c > 126)
		return (1);
	return (0);
}

int	ft_is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}	

int	ft_is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_is_isspace(char c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	return (0);
}