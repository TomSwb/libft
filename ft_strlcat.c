/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 16:08:56 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/31 16:58:10 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* @brief 
Return the total length of the attempted concatenation, 
strlen(dst) + strlen(src) if successful or size + strlen(src) if the buffer dst
has no '\0' char within size bytes which does not result in a concatenation.

* @param dst 
* @param src 
* @param size 
* @return size_t 
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	while (src[j])
		j++;
	k = j;
	i = 0;
	while (i < size && dst[i])
		i++;
	if (i == size)
		return (size + j);
	j = 0;
	while (j < (size - 1) - i && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + k);
}
