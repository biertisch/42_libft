/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:16:06 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:17:00 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		size;

	if (!s)
		return (NULL);
	size = ft_strlen(s) + 1;
	dup = (char *)malloc(size);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, size);
	return (dup);
}

/*int	main(int argc, char **argv)
{
	char	*src;
	char	*dst1;
	char	*dst2;

	if (argc != 2)
	{
		printf("Usage: ./a.out [source string]\n");
		return (1);
	}
	src = argv[1];
	dst1 = ft_strdup(src);
	if (!dst1)
		printf("Testing with ft_strdup: NULL\n");
	else
		printf("Testing with ft_strdup: %s\n", dst1);
	dst2 = strdup(src);
	if (!dst2)
		printf("Testing with strdup: NULL\n");
	else
		printf("Testing with strdup: %s\n", dst2);
	free(dst1);
	free(dst2);
	return (0);
}*/
