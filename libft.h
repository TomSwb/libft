
#ifndef LIBFT_H
# define LIBFT_H

/***** Libraries *****/

// read / write / close 
# include <unistd.h> 
// malloc 
# include <stdlib.h>

/*****  Functions *****/

int		ft_isalpha(int c);
int		ft_isdigit(int c);
//TODO: int 	ft_isalnum(int c);
//TODO: int 	ft_isascii(int c);
//TODO: int 	ft_isprint(int c);

//TODO: int		ft_toupper(int c);
//TODO: int		ft_tolower(int c);

//TODO: int		atoi(const char *nptr);

//TODO: size_t	ft_strlen(const char *s);
//TODO: size_t	ft_strlcpy(char dst[.dsize], const char *src);
//TODO: int		ft_strncmp(const char s1[.n], const char s2[.n], size_t n);
//TODO: strnstr

//TODO: void	*ft_memset(void s[.n], int c, size_t n);
//TODO: void	ft_bzero(void s[.n], size_t n);
//TODO: void	*ft_memcpy(void dest[.n], const void src(.n), size_t n);
//TODO: void	*ft_memmove(void dest[.n], const void src[.n], size_t n);
//TODO: void	*ft_memchr(const void s[.n], int c, size_t n);
//TODO: int		ft_memcmp(const void s1[.n], const void s2[.n], size_t n);

//TODO: char	*ft_strchr(const char *s, int c);
//TODO: char	*ft_strrchr(const char *s, int c);

//TODO: void	*ft_calloc(size_t n, size_t size);
//TODO: char	*ft_strdup(const char *s);

#endif