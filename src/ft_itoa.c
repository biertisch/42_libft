/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:21:24 by beatde-a          #+#    #+#             */
/*   Updated: 2025/09/09 18:43:53 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static void	set_digits(char *s, long int nbr, size_t i)
{
	if (nbr < 0)
	{
		s[0] = '-';
		nbr *= -1;
	}
	if (nbr < 10)
	{
		s[i] = nbr + 48;
	}
	else
	{
		set_digits(s, nbr / 10, i - 1);
		s[i] = nbr % 10 + 48;
	}
}

static size_t	count_digits(long int nbr)
{
	size_t	digit_count;

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
	char		*s;
	long int	nbr;
	size_t		digit_count;

	nbr = n;
	digit_count = count_digits(nbr);
	s = malloc(digit_count + 1);
	if (!s)
		return (NULL);
	set_digits(s, nbr, digit_count - 1);
	s[digit_count] = '\0';
	return (s);
}
