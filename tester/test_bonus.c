/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:36:16 by beatde-a          #+#    #+#             */
/*   Updated: 2025/09/12 14:53:56 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	*test_f2(void *content)
{
	void	*new_content;

	(void)content;
	new_content = malloc(8);
	if (!new_content)
		return (NULL);
	tested_strlcpy(new_content, "I'm new", 8);
	return (new_content);
}

static void	test_ft_lstmap(void)
{
	printf("\n---------------------TESTING FT_LSTMAP----------------------\n\n");
	t_list *head;
	head = tested_build_list();
	printf("Current list:\n");
	tested_print_list(head);
	printf("\n");

	printf("New list resulting from the successive applications of function f:\n");
	t_list *new = ft_lstmap(head, test_f2, free);
	tested_print_list(new);
	printf("\n");
	tested_free_list(&new);

	printf("New list after applying a null function:\n");
	new = ft_lstmap(head, NULL, free);
	tested_print_list(new);
	printf("\n");
	tested_free_list(&new);

	tested_free_list(&head);
	printf("Passing a null list... New list:\n");
	new = ft_lstmap(head, test_f2, free);
	tested_print_list(new);
	printf("All good: no segfault.\n\n");
}

static void	test_f1(void *content)
{
	if (!content)
		return ;
	tested_strlcpy(content, "I was transformed", 18);
}

static void	test_ft_lstiter(void)
{
	printf("\n--------------------TESTING FT_LSTITER----------------------\n\n");
	t_list *head;
	head = tested_build_list();
	printf("Current list:\n");
	tested_print_list(head);
	printf("\n");

	printf("List after applying function f to its content:\n");
	ft_lstiter(head, test_f1);
	tested_print_list(head);
	printf("\n");

	printf("List after applying a null function:\n");
	ft_lstiter(head, NULL);
	tested_print_list(head);
	printf("\n");

	tested_free_list(&head);
	printf("Passing a null list... Resulting list:\n");
	ft_lstiter(head, test_f1);
	tested_print_list(head);
	printf("All good: no segfault.\n\n");
}

static void	test_ft_lstclear(void)
{
	printf("\n--------------------TESTING FT_LSTCLEAR---------------------\n\n");
	t_list *head;
	head = tested_build_list();
	printf("Current list:\n");
	tested_print_list(head);
	printf("\n");

	printf("List after being cleared:\n");
	ft_lstclear(&head, free);
	tested_print_list(head);
	printf("\n");

	printf("Passing a valid pointer to a null node...\n");
	ft_lstclear(&head, free);
	if (!head)
		printf("All good: node is still null and we haven't segfaulted.\n\n");

	printf("Passing a null pointer...\n");
	ft_lstclear(NULL, free);
	printf("All good: still here.\n\n");
}

static void	test_ft_lstdelone(void)
{
	printf("\n-------------------TESTING FT_LSTDELONE---------------------\n\n");
	t_list *head;
	head = tested_build_list();
	printf("Current list:\n");
	tested_print_list(head);
	printf("\n");

	printf("List after deleting element 4:\n");
	ft_lstdelone(head->next->next->next->next, free);
	head->next->next->next->next = NULL;
	tested_print_list(head);
	printf("\n");
	tested_free_list(&head);

	printf("Passing a null node...\n");
	ft_lstdelone(head, free);
	if (!head)
		printf("All good: node is still null and we haven't segfaulted.\n\n");
}

static void	test_ft_lstadd_back(void)
{
	printf("\n------------------TESTING FT_LSTADD_BACK--------------------\n\n");

	t_list *head;
	head = tested_build_list();
	printf("Current list:\n");
	tested_print_list(head);
	printf("\n");

	t_list *node;
	node = tested_lstnew(ft_strdup("5"));
	if (!node)
	{
		perror("malloc failed");
		write(2, "fatal error: leaving programme...\n", 34);
		free(head);
		exit(1);
	}
	ft_lstadd_back(&head, node);
	printf("List after adding new element containing '5':\n");
	tested_print_list(head);
	printf("\n");

	printf("List after adding null element:\n");
	ft_lstadd_back(&head, NULL);
	tested_print_list(head);
	printf("\n");

	tested_free_list(&head);
	node = tested_lstnew(ft_strdup("5"));
	if (!node)
	{
		perror("malloc failed");
		write(2, "fatal error: leaving programme...\n", 34);
		free(head);
		exit(1);
	}
	printf("Null list after adding new element containing '5':\n");
	ft_lstadd_back(&head, node);
	tested_print_list(head);
	printf("\n");
	tested_free_list(&head);
}


static void	test_ft_lstlast(void)
{
	printf("\n--------------------TESTING FT_LSTLAST----------------------\n\n");

	t_list *head = tested_build_list();
	printf("Current list:\n");
	tested_print_list(head);

	t_list *last;
	last = ft_lstlast(head);
	if (!last)
		printf("Last node is null");
	else
		printf("Last node exists and contains: %s", (char *)last->content);
	printf("\n\n");

	tested_free_list(&head);
	printf("Current list:\n");
	tested_print_list(head);
	last = ft_lstlast(head);
	if (!last)
		printf("Last node is null");
	else
		printf("Last node exists and contains: %s", (char *)last->content);
	printf("\n\n");
}

static void	test_ft_lstsize(void)
{
	printf("\n--------------------TESTING FT_LSTSIZE----------------------\n\n");

	t_list *head = tested_build_list();
	printf("Current list:\n");
	tested_print_list(head);
	printf("Number of elements: %d\n\n", ft_lstsize(head));
	tested_free_list(&head);

	printf("Current list:\n");
	tested_print_list(head);
	printf("Number of elements: %d\n\n", ft_lstsize(head));
}

static void	test_ft_lstadd_front(void)
{
	printf("\n-----------------TESTING FT_LSTADD_FRONT--------------------\n\n");

	t_list *head;
	head = tested_build_list();
	printf("Current list:\n");
	tested_print_list(head);
	printf("\n");

	t_list *node;
	node = tested_lstnew(ft_strdup("5"));
	if (!node)
	{
		perror("malloc failed");
		write(2, "fatal error: leaving programme...\n", 34);
		free(head);
		exit(1);
	}
	ft_lstadd_front(&head, node);
	printf("List after adding new element containing '5':\n");
	tested_print_list(head);
	printf("\n");

	printf("List after adding null element:\n");
	ft_lstadd_front(&head, NULL);
	tested_print_list(head);
	printf("\n");

	tested_free_list(&head);
	node = tested_lstnew(ft_strdup("5"));
	if (!node)
	{
		perror("malloc failed");
		write(2, "fatal error: leaving programme...\n", 34);
		free(head);
		exit(1);
	}
	printf("Null list after adding new element containing '5':\n");
	ft_lstadd_front(&head, node);
	tested_print_list(head);
	printf("\n");
	tested_free_list(&head);
}

static void	test_ft_lstnew(void)
{
	printf("\n--------------------TESTING FT_LSTNEW-----------------------\n\n");

	t_list *node;

	char *s = "hello world";
	printf("Creating node with char *s='%s'\n", s);
	node = ft_lstnew(s);
	if (!node)
		printf("node is null");
	else
		printf("node exists, node->content=%s", (char *)node->content);
	printf("\n\n");
	free(node);

	int n = 8;
	printf("Creating node with pointer to int n=%d\n", n);
	node = ft_lstnew(&n);
	if (!node)
		printf("node is null");
	else
		printf("node exists, *node->content=%d", *(int *)node->content);
	printf("\n\n");
	free(node);

	printf("Creating node with null pointer\n");
	node = ft_lstnew(NULL);
	if (!node)
		printf("node is null");
	else
		printf("node exists, node->content=%s", (char *)node->content);
	printf("\n\n");
	free(node);
}

int	main(void)
{
	printf("\n\n------------------TESTING BONUS FUNCTIONS-------------------\n");

	char *input;

	test_ft_lstnew();
	input = readline("Press enter to continue. ");

	test_ft_lstadd_front();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_lstsize();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_lstlast();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_lstadd_back();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_lstdelone();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_lstclear();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_lstiter();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_lstmap();
	free(input);
	printf("Done. Exiting...\n\n");
	return (0);
}
