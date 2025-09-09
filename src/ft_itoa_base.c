/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 21:54:31 by beatde-a          #+#    #+#             */
/*   Updated: 2025/09/09 22:01:22 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_itoa_base(long n, char *base)
{
	char	*buffer;
	size_t	base_size;
	int		digits;

	base_size = ft_strlen(base);
	digits = count_digits(n, base_size);
	buffer = malloc(sizeof(char) * (digits + 1));
	if (!buffer)
		return (NULL);
	buffer[digits] = '\0';
	if (n < 0)
	{
		buffer[0] = '-';
		n *= -1;
	}
	while (digits > 0 && n > 0)
	{
		digits--;
		buffer[digits] = base[n % base_size];
		n /= base_size;
	}
	return (buffer);
}
