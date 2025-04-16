/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:58:07 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 13:58:49 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;

	if (fd == -1)
		return ;
	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if (nbr < 10)
	{
		ft_putchar_fd(nbr + 48, fd);
	}
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putchar_fd(nbr % 10 + 48, fd);
	}
}

/*int	main(int argc, char **argv)
{
	int	n;

	if (argc != 2)
	{
		ft_putstr_fd("Usage: ./a.out [number]\n", 1);
		return (1);
	}
	n = ft_atoi(argv[1]);
	ft_putnbr_fd(n, 1);
	ft_putchar_fd('\n', 1);
	
	//testing with INT_MIN
	ft_putnbr_fd(INT_MIN, 1);
	ft_putchar_fd('\n', 1);
	
	return (0);
}*/
