/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:21:24 by beatde-a          #+#    #+#             */
/*   Updated: 2025/09/12 20:12:20 by beatde-a         ###   ########.fr       */
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
		s[i] = nbr + '0';
	else
	{
		set_digits(s, nbr / 10, i - 1);
		s[i] = nbr % 10 + '0';
	}
}

static int	digit_count(long n)
{
	int	digits;

	digits = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		digits++;
		n *= -1;
	}
	while (n > 0)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char		*s;
	long int	nbr;
	size_t		count;

	nbr = n;
	count = digit_count(nbr);
	s = malloc(count + 1);
	if (!s)
		return (NULL);
	set_digits(s, nbr, count - 1);
	s[count] = '\0';
	return (s);
}
