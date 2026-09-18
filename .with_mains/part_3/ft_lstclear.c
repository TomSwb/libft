
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list  *ft_lstnew(void  *content);
void	*ft_ctnnew(size_t content);
void 	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_delcontent(void *content);

int main(void)
{
	t_list	*lst;
	t_list	*temp1;
	size_t	i;
	size_t	len;
	t_list	*node;

	lst = NULL;
	len = 5;
	i = 0;
	printf("\nAllocating:\n");
	while(i < len)
	{
		node = ft_lstnew(ft_ctnnew(i));
		ft_lstadd_back(&lst, node);
		i++;
	}
	temp1 = lst;
	i = 1;
	while (temp1)
	{
		printf("Node %zu address is: %p, content is: %zu\n", i, (void*)temp1, *(size_t *)temp1->content);
		temp1 = temp1->next;
		i++;
	}
	temp1 = lst;
	i = 1;
	ft_lstclear(&lst->next, ft_delcontent);
	printf("\nClearing...\n");
	printf("\nLeft is:\n");
	while (temp1)
	{
		printf("Node %zu address is: %p, content is: %zu\n", i, (void*)temp1, *(size_t *)temp1->content);
		temp1 = temp1->next;
		i++;
	}
	if (lst->next != NULL)
	{
		printf("lst->next not NULL, function failed");
		return (-1);
	}
	ft_lstclear(&lst, ft_delcontent);
	if (lst != NULL)
	{
		printf("lst not NULL, function failed\n");
		return (-1);
	}
	printf("\nClearing was succesfull");	
}

t_list  *ft_lstnew(void  *content)
{
    t_list *node;
    
    node = malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}

void	*ft_ctnnew(size_t content)
{
	size_t	*new;

	new = malloc(sizeof(size_t));
	if (!new)
		return (NULL);
	*new = content;
	return (new);
}

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

void	ft_delcontent(void *content)
{
    free(content);
}
