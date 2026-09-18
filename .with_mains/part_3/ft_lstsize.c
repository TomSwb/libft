
#include <stdio.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

unsigned int  ft_lstsize(t_list *lst);

int main(void)
{
    size_t n = 0;
    t_list lst[n];
    size_t i = 0;
    int arr[0] = {};
    unsigned int size;
    
    if (n > 0)
    {
        while (i < n - 1)
        {
            lst[i].content = &arr[i];
            lst[i].next = &lst[i + 1];
            i++;
        }
        lst[i].content = &arr[i];
        lst[i].next = NULL;
		size = ft_lstsize(lst);
    }
    else
		size = ft_lstsize(NULL);
    printf("lst size = %u", size);
}

unsigned int  ft_lstsize(t_list *lst)
{
    unsigned int count;
    
    count = 0;
    while (lst)
    {
        count++;
        lst = lst->next;
    }
    return (count);
}
