#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>

void  ft_putendl_fd(char *s, int fd);
size_t ft_strlen(char const *s);

int main(int ac, char **av)
{
    int fd;
    char *s;
    
    if (ac != 3)
        return (-1);
    fd = open(av[1], O_WRONLY);
    if (fd == -1)
        return (-1);
    s = av[2];
    ft_putendl_fd(s, fd);
    close(fd);
}

void  ft_putendl_fd(char *s, int fd)
{
    size_t len;
    
    len = ft_strlen(s);
    write(fd, s, len);
    write(fd, "\n", 1);
}

size_t ft_strlen(char const *s)
{
    size_t len;
    
    len = 0;
    while (s[len])
        len++;
    return (len);
}
