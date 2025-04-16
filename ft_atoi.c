/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:02:40 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:45:02 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_isspace(int c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	long int	res;
	int			sign;
	int			i;

	sign = 1;
	res = 0;
	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}

int	main(int argc, char **argv)
{
	char	*nptr;

	if (argc != 2)
	{
		printf("Usage: ./a.out [number]\n");
		return (1);
	}
	nptr = argv[1];
	printf("Testing with ft_atoi: %d\n", ft_atoi(nptr));
	printf("Testing with atoi: %d\n", atoi(nptr));
	printf("Testing with ft_atoi: %d\n", ft_atoi("2147483647"));
	printf("Testing with atoi: %d\n", atoi("2147483647"));
	printf("Testing with ft_atoi: %d\n", ft_atoi("-2147483648"));
	printf("Testing with atoi: %d\n", atoi("-2147483648"));
	printf("Testing with ft_atoi: %d\n", ft_atoi(NULL));
	return (0);
}
