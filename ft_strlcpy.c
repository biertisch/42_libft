/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:22:38 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:23:58 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
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
	printf("Testing with ft_strlcpy: %zu\n", ft_strlcpy(dst1, src, size));
	printf("Destination string: %s\n", dst1);
	printf("Testing with strlcpy: %zu\n", strlcpy(dst2, src, size));
	printf("Destination string: %s\n", dst2);
	return (0);
}*/
