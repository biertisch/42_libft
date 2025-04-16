/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:59:22 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 13:59:28 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (fd == -1 || !s)
		return ;
	write(fd, s, ft_strlen(s));
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
	ft_putstr_fd(s, 1);
	ft_putstr_fd("\n", 1);
	return (0);
}*/
