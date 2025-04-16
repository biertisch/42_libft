/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:20:13 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 12:20:17 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int	main(int argc, char **argv) 
{
	int	c;

	if (argc != 2)
	{
		printf("Usage: ./a.out [character code]\n");
		return (1);
	}
	
	c = ft_atoi(argv[1]);

	printf("Testing with ft_isascii: ");
	if (ft_isascii(c))
		printf("ascii\n");
	else
		printf("not ascii\n");

	printf("Testing with isascii: ");
	if (isascii(c))
		printf("ascii\n");
	else
		printf("not ascii\n");

	return (0);
}*/
