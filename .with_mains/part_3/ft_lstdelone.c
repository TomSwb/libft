
#include <stdio.h>
#include <unistd.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void  ft_lstdelone(t_list *lst, void (*del)(void*));
void ft_delcontent(void *content);

int main(void)
{
    t_list *lst;
    int *n;
    
    lst = malloc(sizeof(t_list));
    n = malloc(sizeof(int));
    *n = 42;
    lst->content = n;
    lst->next = NULL;
    printf("address lst = %p\n", (void *)&lst);
    ft_lstdelone(lst, ft_delcontent);
    if (lst == NULL)
        printf("lst deleted successfully");
    else
        printf("lst still exist at %p", (void *)&lst);
}

void  ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!lst || !del)
        return ;
    del(lst->content);
    free(lst);
}

void ft_delcontent(void *content)
{
    free(content);
}
