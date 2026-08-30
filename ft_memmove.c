/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 11:04:35 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/30 11:08:06 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* @brief 
Returns a pointer to the given 'dest' array after copyig
'n' len of bytes from 'src' in it, ensuring overlap does not 
affect the data contrarily to memcpy which does not account for it.

* @param dest 
* @param src 
* @param n 
* @return void* 
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*u_dest;
	unsigned char		*u_src;
	size_t				i;

	u_dest = (unsigned char *)dest;
	u_src = (unsigned char *)src;
	if (n == 0)
		return (dest);
	i = 0;
	while (n > 0)
	{
		if (u_dest < u_src)
		{
			u_dest[i] = u_src[i];
			i++;
		}
		else
			u_dest[n - 1] = u_src[n - 1];
		n--;
	}
	return (dest);
}
