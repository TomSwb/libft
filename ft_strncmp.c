/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 16:30:36 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/25 18:02:30 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* @brief 
Compares not more than n bytes (bytes
that follow a NUL character are not compared) from the array
pointed to by s1 to the array pointed to by s2.

It returns the value difference of the first char not equal in both strings.
It returns 0 if both strings are equal up to n.

The sign of a non-zero return value is determined by the sign of
the difference between the values of the first pair of bytes (both
interpreted as type unsigned char) that differ in the strings
being compared

* @param s1 
* @param s2 
* @param n 
* @return int 
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
