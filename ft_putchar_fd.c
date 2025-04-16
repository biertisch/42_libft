/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:56:04 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 13:56:31 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd == -1)
		return ;
	write(fd, &c, 1);
}

/*int	main(int argc, char **argv)
{
	char	c;

	if (argc != 2)
	{
		printf("Usage: ./a.out [character]\n");
		return (1);
	}
	c = argv[1][0];
	ft_putchar_fd(c, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
