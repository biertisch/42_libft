/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:20:38 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:22:16 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	if (!dst || !src)
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	while (i < size - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*int	main(int argc, char **argv)
{
	char	dst1[50] = "hello";
	char	dst2[50] = "hello";
	char	*src;
	int		size;

	if (argc != 3)
	{
		printf("Usage: ./a.out [source string] [size]\n");
		return (1);
	}
	src = argv[1];
	size = atoi(argv[2]);
	printf("Testing with ft_strlcat: %zu\n", ft_strlcat(dst1, src, size));
	printf("Destination string: %s\n", dst1);
	printf("Testing with strlcat: %zu\n", strlcat(dst2, src, size));
	printf("Destination string: %s\n", dst2);
	return (0);
}*/
