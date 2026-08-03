/**
 * @author TomSwb
 * @version 0.1
 * @date 2026-08-03
 */


#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);

int	main(int ac, char **av)
{
	int	c;

	if (ac > 1)
		c = av[1][0];
	else
	 	(void) ac;
	printf("ft: %d\n", ft_isalpha(c));
	printf("OG: %d", isalpha(c));
}
/**
 * @brief 
	Checks for an alphabetic character; in the standard  "C"
	locale,  it is equivalent to (isupper(c) || islower(c)).
	In some locales, there may be additional characters  for
	which isalpha() is true—letters which are neither upper‐
	case nor lowercase.
	
 * @param c 
 * @return int 
 */
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || 
		(c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}