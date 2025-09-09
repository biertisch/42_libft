/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:52:28 by beatde-a          #+#    #+#             */
/*   Updated: 2025/09/09 22:03:07 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		lone_percent(const char *format);
int		convert(va_list args, char type);
int		update_len(int res, int *len);
int		print_char(char c);
int		print_str(char *s);
int		print_int(int n);
int		print_uint(unsigned int n);
int		print_hex(unsigned int n, char type);
int		print_ptr(void *ptr);

#endif