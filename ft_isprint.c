/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:21:00 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 12:21:03 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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

	printf("Testing with ft_isprint: ");
	if(ft_isprint(c))
		printf("printable\n");
	else
		printf("not printable\n");

	printf("Testing with isprint: ");
	if(isprint(c))
		printf("printable\n");
	else
		printf("not printable\n");

	return (0);
}*/
