
#include <unistd.h>
#include <stdio.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_delcontent(void *content);

int main(void)
{
    t_list	**lst;
	t_list	*temp;
    t_list	*node1;
    t_list	*node2;
    t_list	*node3;
	int		*n1;
	int		*n2;
	int		*n3;
	size_t	i;
    
    node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	n1 = malloc(sizeof(int));
	n2 = malloc(sizeof(int));
	n3 = malloc(sizeof(int));
	*n1 = 40;
	*n2 = 41;
	*n3 = 42;
	lst = &node1;
	node1->content = n1;
	node1->next = node2;
	node2->content = n2;
	node2->next = node3;
	node3->content = n3;
	node3->next = NULL;
	temp = *lst;
	i = 1;
	while (temp)
	{
		printf("Node %zu address is: %p\n", i, (void)temp);
		temp = temp->next;
		i++;
	}
	temp = *lst;
	i = 1;
	lst = &(*lst)->next;
	ft_lstclear(lst, ft_delcontent);
	while (temp)
	{
		printf("Node %zu address is: %p\n", i, (void)temp);
		temp = temp->next;
		i++;
	} 
	if (*lst !=NULL)
	{
		printf("*lst not NULL, function failed");
		return (-1);
	}
	ft_lstclear(&node1, ft_delcontent);
	if (node1 != NULL || temp != NULL)
	{
		if (temp != NULL)
			printf("Temp not NULL, function failed\n");
		if (node1 != NULL)
			printf("Node1 not NULL, function failed");
		return (-1);
	}
	printf("Clearing was succesfull");	
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
