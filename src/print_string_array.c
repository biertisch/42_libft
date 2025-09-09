/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string_array.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 22:10:32 by beatde-a          #+#    #+#             */
/*   Updated: 2025/09/09 22:14:30 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	print_string_array(char **array)
{
	if (!array)
		return ;
	while (*array)
	{
		ft_printf("%s\n", *array);
		array++;
	}
}
