
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>

void  ft_putnbr_fd(int n, int fd);
size_t ft_strlen(char const *s);

int main(int ac, char **av)
{
    int fd;
    int n;
    
    if (ac != 2)
        return (-1);
    fd = open(av[1], O_WRONLY);
    if (fd == -1)
        return (-1);
    n = 42;
    ft_putnbr_fd(n, fd);
    close(fd);
}

void  ft_putnbr_fd(int n, int fd);
{
    long num;
    
    num = n;
    if (num < 0)
    {
        ft_putchar_fd('-');
        numm = -num;
    }
    if (num >= 10)
        ft_putnbr_fd(num / 10, fd);
    num = num % 10;
    ft_putchar_fd(num + 48, fd);
}

size_t ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
