/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 22:34:31 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/29 16:36:05 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* @brief 
Returns the result of comparing the bytes value up to 'n' number of bytes.

* @param s1 
* @param s2 
* @param n 
* @return int 
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = s1;
	str2 = s2;
	while (n > 0 && (*str1 || *str2))
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
