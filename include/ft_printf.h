/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:52:28 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/29 14:52:28 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		lone_percent(const char *format);
int		convert(va_list args, char type);
int		update_len(int res, int *len);
size_t	ft_strlen(const char *s);
int		print_char(char c);
int		print_str(char *s);
int		print_int(int n);
int		print_uint(unsigned int n);
int		print_hex(unsigned int n, char type);
int		print_ptr(void *ptr);
char	*ft_itoa_base(uintptr_t n, char *base);
int		count_digits(uintptr_t n, size_t base_size);

#endif