/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:23:41 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 12:24:41 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*When testing with overlap (copying from ft_memmove.c),
memcpy handles the overlap appropriately, while ft_memcpy does not.
Should I change ft_memcpy to copy from end to start in cases of overlap, 
even though this is not specified in the manual?*/

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char		*byte_ptr1;
	const unsigned char	*byte_ptr2;
	size_t				i;

	byte_ptr1 = s1;
	byte_ptr2 = s2;
	i = 0;
	while (i < n)
	{
		byte_ptr1[i] = byte_ptr2[i];
		i++;
	}
	return (s1);
}

/*int	main(void)
{
	char	*char_src = "hello"; 
	char	char_dst1[30] = "world";
	char	char_dst2[30] = "world";
	int	int_src[5] = {9, 8, 7, 6, 5};
	int	int_dst1[5] = {0, 1, 2, 3, 4};
	int	int_dst2[5] = {0, 1, 2, 3, 4};
	int	i;

	//testing with string
	ft_memcpy(char_dst1, char_src, 3);
	printf("Testing with ft_memcpy: %s\n", char_dst1);
	memcpy(char_dst2, char_src, 3);
	printf("Testing with memcpy: %s\n", char_dst2);

	//testing with int array
	ft_memcpy(int_dst1, int_src, sizeof(int) * 2);
	printf("Testing with ft_memcpy: ");
	i = 0; 
	while (i < 5)
	{
		printf("%d", int_dst1[i]);
		i++;
	}
	printf("\n");

	memcpy(int_dst2, int_src, sizeof(int) * 2);
	printf("Testing with memcpy: ");
	i = 0;
	while (i < 5)
	{
		printf("%d", int_dst2[i]);
		i++;
	}
	printf("\n");

	return (0);
}*/
