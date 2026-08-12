/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 16:29:16 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/12 16:37:24 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief 
 Returns the length of the given char *s
  
 * @param char *s 
 * @return size_t
 */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
