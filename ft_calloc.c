/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 16:22:12 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/30 16:23:48 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* @brief 
Return an initialised 'malloced' array filled with 0 up to len 'n'.

* @param n 
* @param size 
* @return void* 
*/

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*array;
	void			*empty;
	size_t			i;

	if (n == 0 || size == 0)
	{
		empty = malloc(0);
		return (empty);
	}
	if (n > SIZE_MAX / size)
		return (NULL);
	array = malloc(size * n);
	if (!array)
		return (NULL);
	i = 0;
	while (i < (n * size))
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
