
#include <unistd.h>
#include <stdio.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void  ft_lstclear(t_list **lst, void (*del)(void*));
void ft_delcontent(void *content);

int main(void)
{
    t_list **lst;
    t_list *node1;
    t_list *node2;
    t_list *node3;
    
    lst = malloc(sizeof(t_list *) * 4);
    
}

void  ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *temp;
    
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

void ft_delcontent(void *content)
{
    free(content);
}
