
typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

unsigned int  ft_lstsize(t_list *lst);
