/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:19:43 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 12:19:47 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*int	main(int argc, char** argv)
{
	char	c;
	
	if (argc != 2)
	{
		printf("Usage: ./a.out [character]\n");
		return (1);
	}

	c = argv[1][0];

	printf("Testing with ft_isalpha: ");
	if (ft_isalpha(c))
		printf ("%c is alphabetic\n", c);
	else
		printf ("%c is not alphabetic\n", c);
	
	printf("Testing with isalpha: ");
	if (isalpha(c))
		printf ("%c is alphabetic\n", c);
	else
		printf ("%c is not alphabetic\n", c);
	
	return (0);
}*/
