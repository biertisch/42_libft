/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:26:31 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:27:11 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	little_len = ft_strlen(little);
	while ((i + little_len) <= n && big[i] != '\0')
	{
		if (ft_strncmp(big + i, little, little_len) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

/*int	main(int argc, char **argv)
{
	char	*big;
	char	*little;
	int		n;

	if (argc != 4)
	{
		printf("Usage: ./a.out [string 1] [string 2] [length]\n");
		return (1);
	}
	big = argv[1];
	little = argv[2];
	n = atoi(argv[3]);
	printf("Testing with ft_strnstr: %s\n", ft_strnstr(big, little, n));
	//printf("Testing with strnstr: %s\n", strnstr(big, little, n));
	return (0);
}*/
