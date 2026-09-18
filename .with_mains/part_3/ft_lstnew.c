
#include <stdlib.h>
#include <stdio.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list  *ft_lstnew(void  *content);

int main(void)
{
    int num = 42;
    t_list *node;
    
    node = NULL;
    printf("\nnode is NULL\n");
    node = ft_lstnew(&num);
    if (node == NULL)
        printf("\nnode content is still NULL\n");
    else
    {
        printf("\nnode has been initiated\n");
        printf("\nnode content is %d\n", *(int*)node->content);
        free(node);
    }
}

t_list  *ft_lstnew(void  *content)
{
    t_list *node;
    
    node = malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}
