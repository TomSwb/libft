/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 16:30:36 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/29 16:36:16 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* @brief 
Returns the difference of value between the char in same index of 
's1' and 's2' maximum of 'n' len or before 'NULL' char

* @param s1 
* @param s2 
* @param n 
* @return int 
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
