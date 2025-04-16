/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:27:30 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 13:42:52 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*byte_dst;
	const char	*byte_src;

	if (!s1 || !s2)
		return (NULL);
	byte_dst = (char *)s1;
	byte_src = (const char *)s2;
	if (byte_dst < byte_src)
		ft_memcpy(byte_dst, byte_src, n);
	else
	{
		while (n > 0)
		{
			n--;
			byte_dst[n] = byte_src[n];
		}
	}
	return (s1);
}

/*int	main(int argc, char **argv)
{
	char	str1[13] = "hello, world";
	char	str2[13] = "hello, world";
	int	arr1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	arr2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	i;
	int	start;
	int	n;

	if (argc != 3)
	{
		printf("Usage: ./a.out [number of bytes] [start]\n");
		return (1);
	}
	n = ft_atoi(argv[1]);
	start = ft_atoi(argv[2]);

	//testing with string
	ft_memmove(str1 + start, str1, n);
	printf("Testing with ft_memmove: %s\n", str1);
	memmove(str2 + start, str2, n);
	printf("Testing with memmove: %s\n", str2);

	//testing with int array
	ft_memmove(arr1 + start, arr1, sizeof(int) * n);
	printf("Testing with ft_memmove: ");
	i = 0;
	while (i < 10)
	{
		printf("%d", arr1[i]);
		i++;
	}
	printf("\n");

	memmove(arr2 + start, arr2, sizeof(int) * n);
	printf("Testing with memmove: ");
	i = 0;
	while (i < 10)
	{
		printf("%d", arr2[i]);
		i++;
	}
	printf("\n");

	return (0);
}*/
