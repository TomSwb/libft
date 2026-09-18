/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 17:02:06 by tomswb            #+#    #+#             */
/*   Updated: 2026/09/18 17:04:16 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* @brief 
Appends the given node 'new' to the current list 'lst'. Lastnode->next
stores new address and new->next = NULL to terminate the list again

* @param lst 
* @param new 
*/
void  ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *ptr;
    
    if (!lst || !new)
        return ;
    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }
    ptr = *lst;
    while (ptr && ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = new;
}
