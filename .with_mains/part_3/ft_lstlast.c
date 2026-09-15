
#include <stdio.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list  *ft_lstlast(t_list *lst);

int	main(void)
{
	t_list	*ptr;
	t_list	node1;
	t_list	node2;
	t_list	node3;

	ptr = &node1;
	node1.content = NULL;
	node1.next = &node2;
	node2.content = NULL;
	node2.next = &node3;
	node3.content = NULL;
	node3.next = NULL;
	printf("Node1 address is : %p\n", (void *)&node1);
	printf("ptr is : %p\n", (void *)ptr);
	ptr = ft_lstlast(ptr);
	printf("ptr is : %p\n", (void *)ptr);
	printf("Node3 address is : %p\n", (void *)&node3);
}

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next != NULL)
		lst = lst->next;
	return (lst);
}
