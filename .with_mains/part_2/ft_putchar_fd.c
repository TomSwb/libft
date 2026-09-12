
#include <unistd.h>
#include <fcntl.h>

void  ft_putchar_fd(char c, int fd);

int main(int ac, char **av)
{
    int fd;
    char c;
    
    if (ac != 2)
        return (-1);
    fd = open(av[1], O_WRONLY);
    c = 'c';
    ft_putchar_fd(c, fd);
    close(fd);
}

void  ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
