/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:25:53 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:26:09 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	int		n;

	if (argc != 4)
	{
		printf("Usage: ./a.out [string 1] [string 2] [length]\n");
		return (1);
	}
	s1 = argv[1];
	s2 = argv[2];
	n = atoi(argv[3]);
	printf("Testing with ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
	printf("Testing with strncmp: %d\n", strncmp(s1, s2, n));
	return (0);
}*/
