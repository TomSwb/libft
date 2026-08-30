/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 16:41:24 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/30 11:42:19 by tomswb           ###   ########.fr       */
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

// macros
# include <limits.h>
# include <stdint.h>
// read / write / close 
# include <unistd.h> 
// size_t
# include <stddef.h>
// malloc 
# include <stdlib.h>

/*****  Functions *****/

/** Part 1 **/

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

int		ft_atoi(const char *nptr);
int		ft_tolower(int c);
int		ft_toupper(int c);

char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
// could not test og function strnstr
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);

void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);

//TODO: void	*ft_calloc(size_t n, size_t size);
//TODO: char	*ft_strdup(const char *s);

/** Part 2 **/

#endif
