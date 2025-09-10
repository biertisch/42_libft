/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 21:24:53 by beatde-a          #+#    #+#             */
/*   Updated: 2025/09/10 19:15:30 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

//using ft_printf
void	print_int_array(int *array, int n)
{
	int	i;

	if (!array || n <= 0)
		return ;
	i = 0;
	while (i < n)
	{
		ft_printf("%d", array[i]);
		if (i < n - 1)
			ft_printf(" ");
		i++;
	}
}
