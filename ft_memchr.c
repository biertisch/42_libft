/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:22:14 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 12:22:34 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*byte_ptr;
	size_t		i;

	byte_ptr = s;
	i = 0;
	while (i < n)
	{
		if (byte_ptr[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

/*int	main(int argc, char **argv)
{
	char	*s;
	char	c;
	int	n;

	if (argc != 4)
	{
		printf("Usage: ./a.out [string] [character] [size]\n");
		return (1);
	}
	s = argv[1];
	c = argv[2][0];
	n = atoi(argv[3]); 
	printf("Testing with ft_memchr: %s\n", (char *)ft_memchr(s, c, n));
	printf("Testing with memchr: %s\n", (char *)memchr(s, c, n));
	return (0);
}*/
