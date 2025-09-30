/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 22:19:14 by beatde-a          #+#    #+#             */
/*   Updated: 2025/09/12 14:27:32 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

#include "../include/libft.h"
# include <ctype.h>
# include <limits.h>
# include <readline/readline.h>
# include <string.h>
# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <termios.h>
# include <unistd.h>
# include <bsd/string.h>

void	tested_print_int_array(int *array, int n);
void	tested_free_string_array(char **array);
void	set_terminal(struct termios *old, struct termios *new);
void	reset_terminal(struct termios *old);
t_list	*tested_lstnew(void *content);
void	tested_lstadd_back(t_list **head, t_list *node);
void 	tested_free_list(t_list **head);
void	tested_print_list(t_list *lst);
t_list	*tested_build_list(void);
size_t	tested_strlcpy(char *dst, const char *src, size_t size);

#endif