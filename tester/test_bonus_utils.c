/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bonus_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 12:38:25 by beatde-a          #+#    #+#             */
/*   Updated: 2025/09/12 14:55:11 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	*tested_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

static void	*tested_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = nmemb * size;
	if (size && (total_size / size != nmemb))
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	tested_memset(ptr, 0, total_size);
	return (ptr);
}

static size_t	tested_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	tested_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (tested_strlen(src));
}

t_list	*tested_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	tested_lstadd_back(t_list **head, t_list *node)
{
	t_list	*trav;

	if (!head || !node)
		return ;
	if (!*head)
	{
		*head = node;
		return ;
	}
	trav = *head;
	while (trav->next)
		trav = trav->next;
	trav->next = node;
}

void tested_free_list(t_list **head)
{
	if (!head || !*head)
		return ;
	while ((*head)->next)
		tested_free_list(&(*head)->next);
	free((*head)->content);
	free(*head);
	*head = NULL;
}

void	tested_print_list(t_list *lst)
{
	int	i = 0;

	if (!lst)
		printf("(null)\n");

	while (lst)
	{
		printf("node %d contains '%s'\n", i, (char *)lst->content);
		lst = lst->next;
		i++;
	}
}

t_list	*tested_build_list(void)
{
	t_list *head;
	t_list *node;

	head = NULL;

	int i = 0;
	while (i < 5)
	{
		char *s = tested_calloc(20, sizeof(char));
		if (!s)
		{
			perror("malloc failed");
			write(2, "fatal error: leaving programme...\n", 34);
			tested_free_list(&head);
			exit(1);
		}
		s[0] = '0' + i;
		node = tested_lstnew(s);
		if (!node)
		{
			perror("malloc failed");
			write(2, "fatal error: leaving programme...\n", 34);
			tested_free_list(&head);
			exit(1);
		}
		tested_lstadd_back(&head, node);
		i++;
	}
	return (head);
}
