/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 17:14:09 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/12 17:19:58 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief 
 Copy src into dest and return the len of the wanted result (len of src)  
 
 * @param char *dest 
 * @param char *src 
 * @param size_t dsize 
 * @return size_t result 
 */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	result;
	size_t	len;

	result = 0;
	while (src[result])
		result++;
	len = 0;
	while (len < dsize)
	{
		dst[len] = src[len];
		len++;
	}
	dst[len] = '\0';
	return (result);
}
