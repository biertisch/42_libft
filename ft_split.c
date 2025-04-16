/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:59:56 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:12:48 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	alt_strlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

int	new_str(char const *s, char c, int i)
{
	if (s[i] != c && (s[i - 1] == c || i == 0))
		return (1);
	return (0);
}

char	**build_arr(char **str_arr, char const *s, char c, int str_count)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < str_count && s[j] != '\0')
	{
		if (new_str(s, c, j))
		{
			str_arr[i] = ft_substr(s, j, alt_strlen(s + j, c));
			if (!str_arr[i])
				return (NULL);
			i++;
		}
		j++;
	}
	str_arr[i] = NULL;
	return (str_arr);
}

int	count_strs(char const *s, char c)
{
	int		str_count;
	int		i;

	str_count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (new_str(s, c, i))
			str_count++;
		i++;
	}
	return (str_count);
}

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	int		str_count;

	if (!s)
		return (NULL);
	str_count = count_strs(s, c);
	str_arr = (char **)malloc(sizeof(char *) * (str_count + 1));
	if (!str_arr)
		return (NULL);
	return (build_arr(str_arr, s, c, str_count));
}

/*int	main(int argc, char **argv)
{
	char	**str_arr;
	char	*s;
	char	c;
	int	i;

	if (argc != 3)
	{
		printf("Usage: [filename] [string] [delimiter character]\n");
		return (1);
	}
	s = argv[1];
	c = argv[2][0];
	str_arr = ft_split(s, c);
	if (!str_arr)
		printf("NULL\n");
	i = 0;
	while (str_arr[i])
	{
		printf("str_arr[%d]: %s\n", i, str_arr[i]);
		i++;
	}
	free(str_arr);
	return (0);
}*/
