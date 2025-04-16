/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:27:33 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:27:36 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*int	main(int argc, char **argv)
{
	char	*s;
	char	c;

	if (argc != 3)
	{
		printf("Usage: ./a.out [string] [character]\n");
		return (1);
	}
	s = argv[1];
	c = argv[2][0];
	printf("Testing with ft_strrchr: %s\n", ft_strrchr(s, c));
	printf("Testing with strrchr: %s\n", strrchr(s, c));
	return (0);
}*/
