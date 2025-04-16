/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:09:20 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:33:52 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = nmemb * size;
	if (total_size / size != nmemb)
		return (NULL);
	ptr = (void *)malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

/*int	main(int argc, char **argv)
{
	int	*ptr1;
	int	*ptr2;
	int	nmemb;
	int	size;
	int	i;

	if (argc != 2)
	{
		printf("Usage: ./a.out [number of members]\n");
		return (1);
	}
	nmemb = ft_atoi(argv[1]);
	size = 4;

	printf("Testing with ft_calloc: ");
	ptr1 = (int *)ft_calloc(nmemb, size);
	if (!ptr1)
		printf("Testing with ft_calloc: NULL\n");
	i = 0;
	while (i < nmemb)
	{
		printf("%d", *(ptr1 + i));
		i++;
	}
	printf("\n");

	printf("Testing with calloc: ");
	ptr2 = (int *)calloc(nmemb, size);
	if (!ptr2)
		printf("Testing with calloc: NULL\n");
	i = 0;
	while (i < nmemb)
	{
		printf("%d", *(ptr2 + i));
		i++;
	}
	printf("\n");

	free(ptr1);
	free(ptr2);
	return (0);
}*/
