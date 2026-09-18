/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 17:49:03 by tomswb            #+#    #+#             */
/*   Updated: 2026/09/18 18:35:20 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* @brief 
Free a singular node and its content.

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
	free(lst);
}
