/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:17:22 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:17:37 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	testf(unsigned int i, char *c)
{
	if (i > 0 && i % 3 == 0)
		*c = '3';
	else if(i > 0 && i % 5 == 0)
		*c = '5';
}

int	main(void)
{
	char	str[13] = "hello banana";

	ft_striteri(str, testf);
	printf("%s\n", str);
	return (0);
}*/
