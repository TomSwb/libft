
typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void  ft_lstadd_back(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;
    while (*lst && *lst->next != NULL)
        *lst = *lst->next;
    lst.next = &new;
}
