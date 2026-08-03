/**
 * @author TomSwb
 * @version 0.1
 * @date 2026-08-03
 */

#include <stdio.h>
#include <ctype.h>

 int	ft_tolower(int c);

 int	main(int ac, char **av)
 {
	int	c;

	if (ac > 1)
		c = av[1][0];
	else
	 	(void) ac;
	printf("ft: %d\n", ft_tolower(c));
	printf("OG: %d", tolower(c));
 }

 /**
  * @brief 
  	If c is an uppercase letter, tolower() returns its lowercase equivalent, 
	if a lowercase representation exists in  the  current locale.  
	Otherwise, it returns c.
  * 
  * @param int c 
  * @return int 
  */
 int	ft_tolower(int c)
 {
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
 }