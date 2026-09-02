/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 16:08:56 by tomswb            #+#    #+#             */
/*   Updated: 2026/09/02 13:09:48 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int	main(void)
{
	char	dst[20] = "Hello";
	const char	*src = "World";
	size_t	size = 15;	

	printf("%s\n", dst);
	printf("%zu\n", ft_strlcat(dst, src, size));
	printf("%s", dst);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i_dest;
	size_t	i_src;
	size_t	len_src;

	i_src = 0;
	while (src[i_src]) 
		i_src++;
	len_src = i_src;
	i_dest = 0;
	while (i_dest < size && dst[i_dest])
		i_dest++;
	if (i_dest == size)
		return (size + i_src);
	i_src = 0;
	while (i_src < (size - 1) - i_dest && src[i_src])
	{
		dst[i_dest + i_src] = src[i_src];
		i_src++;
	}
	dst[i_dest + i_src] = '\0';
	return (i_dest + len_src);
}
