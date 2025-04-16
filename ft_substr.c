/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:28:50 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:28:58 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		size;

	size = len + 1;
	sub = (char *)malloc(size);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, size);
	return (sub);
}

/*int	main(int argc, char **argv)
{
	char	*s;
	char	*sub;
	int		start;
	int		len;

	if (argc != 4)
	{
		printf("Usage: ./a.out [string] [starting index] [max length]\n");
		return (1);
	}
	s = argv[1];
	start = atoi(argv[2]);
	len = atoi(argv[3]);
	sub = ft_substr(s, start, len);
	if (!sub)
		printf("NULL\n");
	else
		printf("%s\n", sub);
	free(sub);
	return (0);
}*/
