/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:21:24 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 12:21:51 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	set_digits(char *strn, long int nbr, int i)
{
	if (nbr < 0)
	{
		strn[0] = '-';
		nbr *= -1;
	}
	if (nbr < 10)
	{
		strn[i] = nbr + 48;
	}
	else
	{
		set_digits(strn, nbr / 10, i - 1);
		strn[i] = nbr % 10 + 48;
	}
}

int	count_digits(long int nbr)
{
	int	digit_count;

	digit_count = 0;
	if (nbr < 0)
	{
		digit_count++;
		nbr *= -1;
	}
	if (nbr == 0)
	{
		return (1);
	}
	while (nbr > 0)
	{
		digit_count++;
		nbr /= 10;
	}
	return (digit_count);
}

char	*ft_itoa(int n)
{
	char		*strn;
	long int	nbr;
	int			digit_count;

	nbr = n;
	digit_count = count_digits(nbr);
	strn = (char *)malloc(digit_count + 1);
	if (!strn)
		return (NULL);
	set_digits(strn, nbr, digit_count - 1);
	strn[digit_count] = '\0';
	return (strn);
}

/*int	main(int argc, char **argv)
{
	char	*strn;
	int		n;

	if (argc != 2)
	{
		printf("Usage: ./a.out [number]\n");
		return (1);
	}
	n = atoi(argv[1]);
	strn = ft_itoa(n);
	if (!strn)
		printf("NULL\n");
	else
		printf("%s\n", strn);
	free(strn);

	//testing with INT_MIN
	strn = ft_itoa(INT_MIN);
	if (!strn)
		printf("NULL\n");
	else
		printf("%s\n", strn);
	free(strn);

	return (0);
}*/
