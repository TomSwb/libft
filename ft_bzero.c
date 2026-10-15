/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 21:38:55 by tschwab           #+#    #+#             */
/*   Updated: 2026/09/18 20:04:10 by tschwab          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

/**
* @brief 
Fills the first n bytes of the given memory area with '\0'.

* @param void *b 
* @param size_t len 
*/

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = '\0';
		i++;
	}
}
