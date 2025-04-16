/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:22:57 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 12:23:14 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*byte_ptr1;
	const char	*byte_ptr2;
	size_t		i;

	byte_ptr1 = s1;
	byte_ptr2 = s2;
	i = 0;
	while (i < n)
	{
		if (byte_ptr1[i] != byte_ptr2[i])
			return (byte_ptr1[i] - byte_ptr2[i]);
		i++;
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	const char	*s1;
	const char	*s2;
	int		n;
	int		arr1[5] = {0, 1, 2, 3, 4};
	int		arr2[5] = {0, 1, 2, 7, 9};

	if (argc != 4)
	{
		printf("Usage: ./a.out [string 1] [string 2] [size]\n");
		return (1);
	}
	
	//testing with string
	s1 = argv[1];
	s2 = argv[2];
	n = atoi(argv[3]);
	printf("Testing with ft_memcmp: %d\n", ft_memcmp(s1, s2, n));
	printf("Testing with memcmp: %d\n", memcmp(s1, s2, n));

	//testing with int array
	n = sizeof(int) * 4;
	printf("Testing wiht ft_memcmp: %d\n", ft_memcmp(arr1, arr2, n));
	printf("Testing with memcmp: %d\n", memcmp(arr1, arr2, n));

	return (0);
}*/
