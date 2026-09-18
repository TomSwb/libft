/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 08:51:12 by tomswb            #+#    #+#             */
/*   Updated: 2026/09/18 18:46:31 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* @brief 
Converts a given char to int, epuring spaces and 
accounting for max 1 occurence of + || - sign

* @param char const *nptr
* @return int 
*/

#include "libft.h"

int	ft_atoi(char const *nptr)
{
	int		result;
	size_t	i;
	int		sign;

	sign = 1;
	i = 0;
	while (nptr[i] == 32
		|| (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
