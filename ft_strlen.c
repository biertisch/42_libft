/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:24:18 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:24:36 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage: ./a.out [string]\n");
		return (1);
	}
	printf("Testing with ft_strlen: %zu\n", ft_strlen(argv[1]));
	printf("Testing with strlen: %zu\n", strlen(argv[1]));
	return (0);
}*/
