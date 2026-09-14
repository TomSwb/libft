
typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int main(void)
{
    size_t n = 5;
    t_list lst[n];
    size_t i = 0;
    int arr[n] = {0, 1, 2, 3, 4};
    unsigned int size;
    
    while (i < n - 1)
    {
        lst[i].content = &arr[i];
        lst[i].next = &lst[i + 1];
        i++;
    }
    lst[i].content = &arr[i];
    lst[i].next = NULL;
    size = ft_lstsize(lst);
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
