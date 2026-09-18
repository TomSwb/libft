
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
	printf("\nInit:\n");
	printf("1st node content is: %d\n", *(int *)ptr->content);
	printf("1st node address is %p\n", (void *)ptr);
	printf("Old node address is %p\n", (void *)&old);
	printf("Old.next address is %p\n", (void *)old.next);
	printf("New node address is %p\n", (void *)&new);
	ft_lstadd_front(&ptr, &new);
	printf("\nAfter call:\n");
	printf("1st node content is: %d\n", *(int *)ptr->content);
	printf("1st node address is %p\n", (void *)ptr);
	printf("New node address is %p\n", (void *)&new);
	printf("New.next node address is %p\n", (void *)ptr->next);
	printf("Old node address is %p\n", (void *)&old);
	printf("Old.next address is %p\n", (void *)old.next);
}

void  ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL || lst == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
