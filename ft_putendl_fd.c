/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:57:09 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 13:57:23 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd == -1 || !s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*int	main(int argc, char **argv)
{
	char	*s;

	if (argc != 2)
	{
		printf("Usage: ./a.out [string]\n");
		return (1);
	}
	s = argv[1];
	ft_putendl_fd(s, 1);
	return (0);
}*/
