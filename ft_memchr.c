/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 21:53:32 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/28 21:56:51 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
* @brief 
Checks the given array for the given 'int c' character and if found returns
the address of found char.

* @param s 
* @param c 
* @param n 
* @return void* 
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		u_c;
	const unsigned char	*u_s;

	i = 0;
	u_c = (unsigned char)c;
	u_s = (unsigned char *)s;
	while (i < n)
	{
		if (u_s[i] == u_c)
			return ((void *)&u_s[i]);
		i++;
	}
	return (NULL);
}
