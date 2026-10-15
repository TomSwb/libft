/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:11:34 by tschwab           #+#    #+#             */
/*   Updated: 2026/08/29 16:35:40 by tschwab          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

/**
* @brief 
Checks for  any  printable  character  including
space.

* @param int c
* @return int 
*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
