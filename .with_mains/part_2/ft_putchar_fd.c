
#include <unistd.h>
#include <>

void  ft_putchar_fd(char c, int fd);

int main(int ac, char **av)
{
    int fd;
    char c;
    
    if (ac != 2)
        return (-1);
    fd = open(av[1]);
    c = 'c';
    ft_putchar_fd(c, av[1]);
}

void  ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
