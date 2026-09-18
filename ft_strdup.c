/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 20:44:54 by tomswb            #+#    #+#             */
/*   Updated: 2026/09/18 17:43:28 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* @brief 
Returns an array with the og 's' string dupped in it (copied) but in the heap 
instead of the stack, using malloc.

External:
	malloc();
	
* @param char const *s 
* @return char* 
*/
char	*ft_strdup(char const *s)
{
	size_t	len;
	char	*dest;
	size_t	i;

	if (!s)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
