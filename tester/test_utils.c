/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 22:19:01 by beatde-a          #+#    #+#             */
/*   Updated: 2025/09/12 12:40:16 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	tested_free_string_array(char **array)
{
	int	i;

	if (!array)
		return ;
	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void	tested_print_int_array(int *array, int n)
{
	int	i;

	if (!array || n <= 0)
		return ;
	i = 0;
	while (i < n)
	{
		printf("%d", array[i]);
		if (i < n - 1)
			printf(" ");
		i++;
	}
}

void	reset_terminal(struct termios *old)
{
	tcsetattr(STDIN_FILENO, TCSANOW, old);
}

void	set_terminal(struct termios *old, struct termios *new)
{
	tcgetattr(STDIN_FILENO, old);
	*new = *old;
	new->c_lflag &= ~(ICANON | ECHO);
	tcsetattr(STDIN_FILENO, TCSANOW, new);
}
