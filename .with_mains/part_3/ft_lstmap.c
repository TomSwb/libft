
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
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	*ft_add42(void *value);
void	ft_delcontent(void *content);
void	ft_lstclear(t_list **lst, void (*del)(void*));

int	main(void)
{
	t_list	*lst;
	t_list	*result;
	t_list	*temp;
	t_list	*tempres;
	size_t	i;
	size_t	len;
	t_list	*node;

	lst = NULL;
	len = 5;
	i = 0;
	printf("\nAllocating OG list:\n");
	while(i < len)
	{
		node = ft_lstnew(ft_ctnnew(i));
		ft_lstadd_back(&lst, node);
		i++;
	}
	temp = lst;
	i = 1;
	while (temp)
	{
		printf("Node %zu address is: %p, content is: %zu\n", i, (void*)temp, *(size_t *)temp->content);
		temp = temp->next;
		i++;
	}
	result = ft_lstmap(lst, ft_add42, ft_delcontent);
	printf("\nAfter ft_lstmap:\n");
	tempres = result;
	i = 1;
	printf("\nResult list:\n");
	while (tempres)
	{
		printf("Node %zu address is: %p, content is: %zu\n", i, (void*)tempres, *(size_t *)tempres->content);
		tempres = tempres->next;
		i++;
	}
	temp = lst;
	i = 1;
	printf("\nOG list is (should be same as earlier):\n");
	while (temp)
	{
		printf("Node %zu address is: %p, content is: %zu\n", i, (void*)temp, *(size_t *)temp->content);
		temp = temp->next;
		i++;
	}
	ft_lstclear(&lst, ft_delcontent);
	ft_lstclear(&result, ft_delcontent);
	if (lst != NULL || result != NULL)
	{
		printf("\nlst not NULL, function failed freeing\n");
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

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{	
			del(content);
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, node);
		lst = lst->next;
	}
	return (result);
}

void	*ft_add42(void *value)
{
	size_t	*result;
	
	result = malloc(sizeof(size_t));
	if (!result)
		return (NULL);
	*result = *(size_t *)value + 42;
	return ((void *)result);
}

void	ft_delcontent(void *content)
{
    free(content);
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

/*
int	main(void)
{
	t_list	*lst;
	t_list	*result;
	size_t	i;
	size_t	len;
	t_list	*node;

	lst = NULL;
	len = 5;
	i = 0;
	while(i < len)
	{
		node = ft_lstnew(ft_ctnnew(i));
		ft_lstadd_back(&lst, node);
		i++;
	}
	result = ft_lstmap(lst, ft_add42, ft_delcontent);
	ft_lstclear(&lst, ft_delcontent);
	ft_lstclear(&result, ft_delcontent);
	if (lst != NULL || result != NULL)
		return (-1);
}*/
