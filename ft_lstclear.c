/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 17:36:03 by tomswb            #+#    #+#             */
/*   Updated: 2026/09/18 17:39:39 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* @brief 
Free the nodes and their content part of 'lst' up to the last node, 
using the 'del' given function to take care of the content.

External:
	free();

* @param t_list **lst 
* @param void (*del)(void*) 
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list	*temp;
    
    if (!lst || !del)
        return ;
    while (*lst)
    {
        temp = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        *lst = temp;
    }
}
