/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 16:08:56 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/31 16:44:34 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int	main(void)
{
	char	dst[] = "Hello";
	char	src[] = "World";
	size_t	size = 5;	

	printf("%s\n", dst);
	printf("%zu\n", ft_strlcat(dst, src, size));
	printf("%s", dst);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	while (src[j])
		j++;
	k = j;
	i = 0;
	while (i < size && dst[i])
		i++;
	if (i == size)
		return (size + j);
	j = 0;
	while (j < (size - 1) - i && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + k);
}
