
#include <stdlib.h>
#include <stdio.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int main(void)
{
    int num = 42;
    t_list *node;
    
    node = NULL;
    if (node == NULL)
        printf("node content is NULL\n");
    node = ft_lstnew(&num);
    if (node == NULL)
        printf("node content is NULL\n");
    else
    {
        printf("node has a t_list init\n");
        printf("node content is %d", *(int*)node->content);
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
