/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:21:24 by beatde-a          #+#    #+#             */
/*   Updated: 2025/09/09 22:08:20 by beatde-a         ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	char		*s;
	long int	nbr;
	size_t		digit_count;

	nbr = n;
	digit_count = count_digits(nbr, 10);
	s = malloc(digit_count + 1);
	if (!s)
		return (NULL);
	set_digits(s, nbr, digit_count - 1);
	s[digit_count] = '\0';
	return (s);
}
