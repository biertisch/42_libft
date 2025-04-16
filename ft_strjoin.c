/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:18:23 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:20:20 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sjoin;
	int		size;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	sjoin = (char *)malloc(size);
	if (!sjoin)
		return (NULL);
	ft_strlcpy(sjoin, s1, size);
	ft_strlcat(sjoin, s2, size);
	return (sjoin);
}

/*int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	char	*sjoin;

	if (argc != 3)
	{
		printf("Usage: ./a.out [string 1] [string 2]\n");
		return (1);
	}
	s1 = argv[1];
	s2 = argv[2];
	sjoin = ft_strjoin(s1, s2);
	if (!sjoin)
		printf("NULL\n");
	else
		printf("%s\n", sjoin);
	free(sjoin);
	return (0);
}*/
