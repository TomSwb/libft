
#include <stddef.h>
#include <stdio.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_add42(void *value);

int	main(void)
{
	t_list	*lst;
	t_list	node1;
	t_list	node2;
	int		n1;
	int		n2;

	n1 = 0;
	n2 = 1;
	lst = &node1;
	node1.content = &n1;
	node1.next = &node2;
	node2.content = &n2;
	node2.next = NULL;
	printf("\nInit:\n");
	printf("node1 content = %d, address: %p\n", *(int *)node1.content, &node1.content);
	printf("node2 content = %d, address: %p\n", *(int *)node2.content, &node2.content);
	ft_lstiter(lst, ft_add42);
	printf("\nAfter ft_lstiter:\n");
	printf("node1 content = %d, address: %p\n", *(int *)node1.content, &node1.content);
	printf("node2 content = %d, address: %p\n", *(int *)node2.content, &node2.content);
}

void	ft_lstiter(t_list *lst, void(*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

void	ft_add42(void *value)
{
	int	*result;
	
	result = (int *)value;
	*result += 42;
}