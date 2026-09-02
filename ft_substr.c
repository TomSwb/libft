/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 16:39:18 by tomswb            #+#    #+#             */
/*   Updated: 2026/09/02 16:48:55 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* @brief 
Returns a 'char *'of size 'len' containing the bytes of 's' from the 
index 'start' up to 'len'. If no s, reutrns NULL, if start is greater 
than ft_strlen(s), return  "\0".

Depends on:
	ft_strlen();

* @param s 
* @param start 
* @param len 
* @return char* 
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	s_s;

	if (!s)
		return (NULL);
	s_s = ft_strlen(s);
	if (start >= s_s)
		len = 0;
	else if (len > s_s - start)
		len = s_s - start;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
