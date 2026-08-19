/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 16:41:24 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/12 17:20:10 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief
	Header for complete libft library, defining all required libraries, functions
	and struct.
 
 */

#ifndef LIBFT_H
# define LIBFT_H

/***** Libraries *****/

// read / write / close 
# include <unistd.h> 
// size_t
# include <stddef.h>
// malloc 
# include <stdlib.h>

/*****  Functions *****/

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *nptr);

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize);
//TODO: int		ft_strncmp(const char s1*, const char s2*, size_t n);
//TODO: char	*ft_strnstr(const char *big, const char *little, size_t len);
//TODO: char	*ft_strchr(const char *s, int c);
//TODO: char	*ft_strrchr(const char *s, int c);

//TODO: void	*ft_memset(void s[.n], int c, size_t n);
//TODO: void	ft_bzero(void s[.n], size_t n);
//TODO: void	*ft_memcpy(void dest[.n], const void src(.n), size_t n);
//TODO: void	*ft_memmove(void dest[.n], const void src[.n], size_t n);
//TODO: void	*ft_memchr(const void s[.n], int c, size_t n);
//TODO: int		ft_memcmp(const void s1[.n], const void s2[.n], size_t n);

//TODO: void	*ft_calloc(size_t n, size_t size);
//TODO: char	*ft_strdup(const char *s);

#endif
