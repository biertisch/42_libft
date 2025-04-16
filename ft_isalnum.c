/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:19:00 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 12:19:20 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*int	main(int argc, char **argv)
{
	char	c;

	if (argc != 2)
	{
		printf("Usage: ./a.out [character]\n");
		return (1);
	}

	c = argv[1][0];

	printf("Testing with ft_isalnum: ");
	if (ft_isalnum(c))
		printf("%c is alphanumeric\n", c);
	else
		printf("%c is not alphanumeric\n", c);

	printf("Testing with isalnum: ");
	if (isalnum(c))
		printf("%c is alphanumeric\n", c);
	else
		printf("%c is not alphanumeric\n", c);
	
	return (0);
}*/
