/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 08:51:12 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/12 16:36:54 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief 
Converts a given char to int, epuring spaces and 
accounting for max 1 occurence of + || - sign
  
 * @param char *nptr 
 * @return int 
 */
int	ft_atoi(const char *nptr)
{
	int	result;
	int	i;
	int	sign;
	int	count;

	sign = 1;
	while (nptr[i] == 32
		|| nptr[i] >= 9 && nptr[i] <= 13)
		i++;
	count = 0;
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
