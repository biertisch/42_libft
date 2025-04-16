/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:28:07 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:28:30 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_isset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strim;
	int		start;
	int		end;
	int		size;

	start = 0;
	while (s1[start] != '\0' && ft_isset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_isset(s1[end - 1], set))
		end --;
	size = end - start + 1;
	strim = (char *)malloc(size);
	if (!strim)
		return (NULL);
	ft_strlcpy(strim, s1 + start, size);
	return (strim);
}

/*int	main(int argc, char **argv)
{
	char	*s;
	char	*set;
	char	*strim;

	if (argc != 3)
	{
		printf("Usage: ./a.out [string] [set of characters]\n");
		return (1);
	}
	s = argv[1];
	set = argv[2];
	strim = ft_strtrim(s, set);
	if (!strim)
		printf("NULL\n");
	else
		printf("%s\n", strim);
	free(strim);
	return (0);
}*/
