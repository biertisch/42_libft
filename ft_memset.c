/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:43:29 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 13:52:54 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*byte_ptr;
	unsigned char	byte_value;
	size_t			i;

	if (!s)
		return (NULL);
	byte_ptr = (unsigned char *)s;
	byte_value = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		byte_ptr[i] = byte_value;
		i++;
	}
	return (s);
}

/*int	main(int argc, char **argv)
{
	char	str1[6] = "hello";
	char	str2[6] = "hello";
	int	arr1[5] = {0, 1, 2, 3, 4};
	int	arr2[5] = {0, 1, 2, 3, 4};
	int	i;
	int	n;

	if (argc != 2)
	{
		printf("Usage: ./a.out [nmemb]\n");
		return (1);
	}
	n = ft_atoi(argv[1]);

	//testing with string
	ft_memset(str1, 'A', n);
	printf("Testing with ft_memset: %s\n", str1);
	memset(str2, 'A', n);
	printf("Testing with memset: %s\n", str2);

	//testing with int array
	printf("Testing with ft_memset: ");
	ft_memset(arr1, 0, sizeof(int) * n);
	i = 0;
	while (i < 5)
	{
		printf("%i", arr1[i]);
		i++;
	}
	printf("\n");

	printf("Testing with memset: ");
	memset(arr2, 0, sizeof(int) * n);
	i = 0;
	while (i < 5)
	{
		printf("%i", arr2[i]);
		i++;
	}
	printf("\n");

	return (0);
}*/
