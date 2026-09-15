
#include <stdio.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void  ft_lstadd_back(t_list **lst, t_list *new);

int main(void)
{
    t_list *head;
    t_list *lst;
    t_list node1;
    t_list node2;
    t_list lastnode;
    int n1 = 1;
    int n2 = 2;
    int last = 42;
    
    head = &node1;
    lst = &node1;
    node1.content = &n1;
    node1.next = &node2;
    node2.content = & n2;
    node2.next = NULL;
    lastnode.content = &last;
    lastnode.next = NULL;
    while (lst)
    {
        printf("current node address = %p\n", (void *)lst);
        printf("cureent node pointed content is = %d\n", *(int *)lst->content);
        if (lst->next == NULL)
            printf("current node pointed next is = NULL\n");
        else
            printf("current node pointed next is = %p\n", (void *)lst->next);
        printf("\n");
        lst = lst->next;
    }
    ft_lstadd_back(&head, &lastnode);
    lst = head;
    while (lst)
    {
        printf("current node address = %p\n", (void *)lst);
        printf("cureent node pointed content is = %d\n", *(int *)lst->content);
        if (lst->next == NULL)
            printf("current node pointed next is = NULL\n");
        else
            printf("current node pointed next is = %p\n", (void *)lst->next);
        printf("\n");
        lst = lst->next;
    }
}

void  ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *ptr;
    
    if (!lst || !new)
        return ;
    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }
    ptr = *lst;
    while (ptr && ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = new;
}
