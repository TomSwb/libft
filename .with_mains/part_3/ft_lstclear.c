
typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void  ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list **ptr;
    
    if (!lst || !del)
        return ;
    while (lst && lst->next != NULL)
    {
        ptr = *lst->next;
        del(*lst->content);
        free(*lst);
        lst = ptr;
    }
}
