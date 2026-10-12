/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 17:49:03 by tomswb            #+#    #+#             */
/*   Updated: 2026/10/12 12:08:51 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* @brief 
Frees a single node after applying the given del function to its content.

External:
    free();

* @param t_list *lst 
* @param void (*del)(void *) 
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free (lst);
}
