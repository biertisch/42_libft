/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:03:36 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 12:03:51 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main(int argc, char **argv)
{
	char	str1[6] = "hello";
	char	str2[6] = "hello";
	int		arr1[6] = {1, 2, 3, 4, 5, 6};
	int		arr2[6] = {1, 2, 3, 4, 5, 6};
	int		n;
	int		start;
	int		i; 

	if (argc != 3)
	{
		printf("Usage: ./a.out [number of bytes] [start]\n");
		return (0);
	}
	n = ft_atoi(argv[1]);
	start = ft_atoi(argv[2]);

	//testing with string
	ft_bzero(str1 + start, n);
	printf("Testing with ft_bzero: %s\n", str1);
	bzero(str2 + start, n);
	printf("Testing with bzero: %s\n", str2);

	//testing with int array
	ft_bzero(arr1, sizeof(int) * n);
	printf("Testing with ft_bzero: ");
	i = 0;
	while (i < 5)
	{
		printf("%d", arr1[i]);
		i++;
	}
	printf("\n");

	bzero(arr2, sizeof(int) * n);
	printf("Testing with bzero: ");
	i = 0;
	while (i < 5)
	{
		printf("%d", arr2[i]);
		i++;
	}
	printf("\n");

	return (0);
}*/
