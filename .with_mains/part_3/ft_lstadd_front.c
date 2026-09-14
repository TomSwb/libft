
#include <stdio.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void  ft_lstadd_front(t_list **lst, t_list *new);

int	main(void)
{
	t_list	*ptr;
	t_list	new;
	t_list	old;
	int	n1 = 0;
	int	n2 = 42;

	old.content = &n1;
	old.next = NULL;
	ptr = &old;
	new.content = &n2;
	new.next = NULL;
	printf("1st node content is: %d\n", *(int *)ptr->content);
	ft_lstadd_front(&ptr, &new);
	printf("1st node content is: %d\n", *(int *)ptr->content);
	printf();
}

void  ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL || lst == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
