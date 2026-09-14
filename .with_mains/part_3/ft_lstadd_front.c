
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

	ft_lstadd_front(&ptr, &new);
}

void  ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL || lst == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
