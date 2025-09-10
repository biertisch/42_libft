/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:28:53 by beatde-a          #+#    #+#             */
/*   Updated: 2025/09/10 20:01:39 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
# include <ctype.h>
# include <limits.h>
# include <string.h>
# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

static void	print_array(int *array, int n)
{
	int	i;

	if (!array || n <= 0)
		return ;
	i = 0;
	while (i < n)
	{
		printf("%d", array[i]);
		if (i < n - 1)
			printf(" ");
		i++;
	}
}

static void	compare_memchr(char *s, char c, int size)
{
	printf("Testing with s=%s c=%c size=%d\n", s, c, size);
	printf("ft_memchr: %s\n", (char *)ft_memchr(s, c, size));
	printf("memchr:    %s\n", (char *)memchr(s, c, size));
	printf("\n");
}

static void	test_ft_memchr(void)
{
	printf("\n---------------------TESTING FT_MEMCHR----------------------\n\n");

	compare_memchr("hello", 'l', 5);
	compare_memchr("hello world", 'w', 10);
	compare_memchr("hello world", 'w', 3);
	compare_memchr("hello", 'j', 6);
	compare_memchr("hello", '\0', 6);
}

static void	compare_strncmp(char *s1, char *s2, int len)
{
	printf("Testing with s1=%s s2=%s len=%d\n", s1, s2, len);
	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, len));
	printf("strncmp:    %d\n", strncmp(s1, s2, len));
	printf("\n");
}

static void	test_ft_strncmp(void)
{
	printf("\n---------------------TESTING FT_STRNCMP---------------------\n\n");

	compare_strncmp("hello", "hello world", 5);
	compare_strncmp("hello", "hello world", 6);
	compare_strncmp("hello", "world", 10);
	compare_strncmp("test\0", "test\1", 5);
	compare_strncmp("\0", "\200", 1);
}

static void	compare_strrchr(char *s, char c)
{
	printf("Testing with s=%s c=%c\n", s, c);
	printf("ft_strrchr: %s\n", ft_strrchr(s, c));
	printf("strrchr:    %s\n", strrchr(s, c));
	printf("\n");
}

static void	test_ft_strrchr(void)
{
	printf("\n---------------------TESTING FT_STRRCHR---------------------\n\n");

	compare_strrchr("hello", 'l');
	compare_strrchr("hello world", 'o');
	compare_strrchr("hello", 'j');
	compare_strrchr("hello", '\0');
	compare_strrchr("", 'j');
}

static void	compare_strchr(char *s, char c)
{
	printf("Testing with s=%s c=%c\n", s, c);
	printf("ft_strchr: %s\n", ft_strchr(s, c));
	printf("strchr:    %s\n", strchr(s, c));
	printf("\n");
}

static void	test_ft_strchr(void)
{
	printf("\n---------------------TESTING FT_STRCHR----------------------\n\n");

	compare_strchr("hello", 'l');
	compare_strchr("hello world", 'w');
	compare_strchr("hello", 'j');
	compare_strchr("hello", '\0');
	compare_strchr("", 'j');
}

static void	compare_tolower(char c)
{
	printf("ft_tolower: %c becomes %c\n", c, ft_tolower(c));
	printf("tolower:    %c becomes %c\n", c, tolower(c));
}

static void	test_ft_tolower(void)
{
	printf("\n---------------------TESTING FT_TOLOWER---------------------\n\n");

	compare_tolower('D');
	compare_tolower('A');
	compare_tolower('j');
	compare_tolower('3');
	compare_tolower('!');
	printf("\n");
}

static void	compare_toupper(char c)
{
	printf("ft_toupper: %c becomes %c\n", c, ft_toupper(c));
	printf("toupper:    %c becomes %c\n", c, toupper(c));
}

static void	test_ft_toupper(void)
{
	printf("\n---------------------TESTING FT_TOUPPER---------------------\n\n");

	compare_toupper('m');
	compare_toupper('z');
	compare_toupper('L');
	compare_toupper('9');
	compare_toupper('!');
	printf("\n");
}

static void	compare_strlcat(char *src, char *dest1, char *dest2, int size)
{
	printf("Testing with src=%s dest=%s size=%d\n", src, dest1, size);
	printf("ft_strlcat: res=%zu dest=%s\n", ft_strlcat(dest1, src, size), dest1);
	printf("strlcat:    res=%zu dest=%s\n", strlcat(dest2, src, size), dest2);
	printf("\n");
}

static void	test_ft_strlcat(void)
{
	printf("\n---------------------TESTING FT_STRLCAT---------------------\n\n");

	char src[] = " world";
	char dest1[50] = "hello";
	char dest2[50] = "hello";
	compare_strlcat(src, dest1, dest2, 11);

	char dest3[50] = "";
	char dest4[50] = "";
	compare_strlcat(src, dest3, dest4, 5);
}

static void	compare_strlcpy(char *src, char *dest1, char *dest2, int size)
{
	printf("Testing with src=%s dest=%s size=%d\n", src, dest1, size);
	printf("ft_strlcpy: res=%zu dest=%s\n", ft_strlcpy(dest1, src, size), dest1);
	printf("strlcpy:    res=%zu dest=%s\n", strlcpy(dest2, src, size), dest2);
	printf("\n");
}

static void	test_ft_strlcpy(void)
{
	printf("\n---------------------TESTING FT_STRLCPY---------------------\n\n");

	char src[] = "world";
	char dest1[50] = "hello";
	char dest2[50] = "hello";
	compare_strlcpy(src, dest1, dest2, 2);

	char dest3[50] = "hello";
	char dest4[50] = "hello";
	compare_strlcpy(src, dest3, dest4, 5);
}

static void	compare_memmove_array(int *src, int *dest1, int *dest2, int n, int size)
{
	printf("Testing with src array={");
	print_array(src, size);
	printf("} dest array={");
	print_array(dest1, size);
	printf("} n=%d\n", n);

	printf("ft_memmove: ");
	ft_memmove(dest1, src, sizeof(int) * n);
	print_array(dest1, size);
	printf("\n");

	printf("memmove:    ");
	memmove(dest2, src, sizeof(int) * n);
	print_array(dest2, size);
	printf("\n\n");
}

static void	compare_memmove_string(char *src, char *dest1, char *dest2, int n)
{
	printf("Testing with src=%s dest=%s n=%d\n", src, dest1, n);
	ft_memmove(dest1, src, n);
	printf("ft_memmove: %s\n", dest1);
	memmove(dest2, src, n);
	printf("memmove:    %s\n", dest2);
	printf("\n");
}

static void	test_ft_memmove(void)
{
	printf("\n--------------------TESTING FT_MEMMOVE----------------------\n\n");

	char src[] = "hello";
	char dest1[30] = "world";
	char dest2[30] = "world";
	compare_memmove_string(src, dest1, dest2, 0);
	char dest3[30] = "world";
	char dest4[30] = "world";
	compare_memmove_string(src, dest3, dest4, 3);

	int arr_src[5] = {9, 8, 7, 6, 5};
	int arr_dest1[5] = {0, 1, 2, 3, 4};
	int arr_dest2[5] = {0, 1, 2, 3, 4};
	compare_memmove_array(arr_src, arr_dest1, arr_dest2, 4, 5);
	int arr_dest3[5] = {0, 1, 2, 3, 4};
	int arr_dest4[5] = {0, 1, 2, 3, 4};
	compare_memmove_array(arr_src, arr_dest3, arr_dest4, 1, 5);
}

static void	compare_memcpy_array(int *src, int *dest1, int *dest2, int n, int size)
{
	printf("Testing with src array={");
	print_array(src, size);
	printf("} dest array={");
	print_array(dest1, size);
	printf("} n=%d\n", n);

	printf("ft_memcpy: ");
	ft_memcpy(dest1, src, sizeof(int) * n);
	print_array(dest1, size);
	printf("\n");

	printf("memcpy:    ");
	memcpy(dest2, src, sizeof(int) * n);
	print_array(dest2, size);
	printf("\n\n");
}

static void	compare_memcpy_string(char *src, char *dest1, char *dest2, int n)
{
	printf("Testing with src=%s dest=%s n=%d\n", src, dest1, n);
	ft_memcpy(dest1, src, n);
	printf("ft_memcpy: %s\n", dest1);
	memcpy(dest2, src, n);
	printf("memcpy:    %s\n", dest2);
	printf("\n");
}

static void	test_ft_memcpy(void)
{
	printf("\n---------------------TESTING FT_MEMCPY----------------------\n\n");

	char src[] = "hello";
	char dest1[30] = "world";
	char dest2[30] = "world";
	compare_memcpy_string(src, dest1, dest2, 2);
	char dest3[30] = "world";
	char dest4[30] = "world";
	compare_memcpy_string(src, dest3, dest4, 10);

	int arr_src[5] = {9, 8, 7, 6, 5};
	int arr_dest1[5] = {0, 1, 2, 3, 4};
	int arr_dest2[5] = {0, 1, 2, 3, 4};
	compare_memcpy_array(arr_src, arr_dest1, arr_dest2, 4, 5);
	int arr_dest3[5] = {0, 1, 2, 3, 4};
	int arr_dest4[5] = {0, 1, 2, 3, 4};
	compare_memcpy_array(arr_src, arr_dest3, arr_dest4, 1, 5);
}

static void	compare_bzero_array(int *arr1, int *arr2, int n, int size)
{
	printf("Testing with int array={");
	print_array(arr1, size);
	printf("} n=%d\n", n);

	printf("ft_bzero: ");
	ft_bzero(arr1, sizeof(int) * n);
	print_array(arr1, size);
	printf("\n");

	printf("bzero:    ");
	bzero(arr2, sizeof(int) * n);
	print_array(arr2, size);
	printf("\n\n");
}

static void	compare_bzero_string(char *s1, char *s2, int n)
{
	printf("Testing with s=%s n=%d\n", s1, n);
	ft_bzero(s1, n);
	printf("ft_bzero: %s\n", s1);
	bzero(s2, n);
	printf("bzero:    %s\n", s2);
	printf("\n");
}

static void	test_ft_bzero(void)
{
	printf("\n----------------------TESTING FT_BZERO----------------------\n\n");

	char s1[6] = "hello";
	char s2[6] = "hello";
	compare_bzero_string(s1, s2, 3);

	int arr1[5] = {1, 2, 3, 4, 5};
	int arr2[5] = {1, 2, 3, 4, 5};
	compare_bzero_array(arr1, arr2, 4, 5);
}

static void	compare_memset_array(int *arr1, int *arr2, int c, int n, int size)
{
	printf("Testing with int array={");
	print_array(arr1, size);
	printf("} c=%d n=%d\n", c, n);

	printf("ft_memset: ");
	ft_memset(arr1, c, sizeof(int) * n);
	print_array(arr1, size);
	printf("\n");

	printf("memset:    ");
	memset(arr2, c, sizeof(int) * n);
	print_array(arr2, size);
	printf("\n\n");
}

static void	compare_memset_string(char *s1, char *s2, char c, int n)
{
	printf("Testing with s=%s c=%c n=%d\n", s1, c, n);
	ft_memset(s1, c, n);
	printf("ft_memset: %s\n", s1);
	memset(s2, c, n);
	printf("memset:    %s\n", s2);
	printf("\n");
}

static void	test_ft_memset(void)
{
	printf("\n---------------------TESTING FT_MEMSET----------------------\n\n");

	char s1[6] = "hello";
	char s2[6] = "hello";
	compare_memset_string(s1, s2, '*', 3);

	char s3[6] = "";
	char s4[6] = "";
	compare_memset_string(s3, s4, '!', 5);

	int arr1[5] = {1, 2, 3, 4, 5};
	int arr2[5] = {1, 2, 3, 4, 5};
	compare_memset_array(arr1, arr2, 0, 2, 5);
}

static void	compare_strlen(char *s)
{
	printf("ft_strlen: '%s' has %zu characters\n", s, ft_strlen(s));
	printf("strlen:    '%s' has %zu characters\n", s, strlen(s));
}

static void	test_ft_strlen(void)
{
	printf("\n---------------------TESTING FT_STRLEN----------------------\n\n");
	compare_strlen("hello world");
	compare_strlen("hello      wor l   d   ");
	compare_strlen(" ");
	compare_strlen("");
	//compare_strlen(NULL); //segfault - expected behaviour
	printf("\n");
}

static void	compare_isprint(int c)
{
	printf("ft_isprint: ");
	if(ft_isprint(c))
		printf("%c is printable\n", c);
	else
		printf("not printable\n");

	printf("isprint:    ");
	if(isprint(c))
		printf("%c is printable\n", c);
	else
		printf("not printable\n");
}

static void	test_ft_isprint(void)
{
	printf("\n--------------------TESTING FT_ISPRINT----------------------\n\n");
	compare_isprint('A');
	compare_isprint('7');
	compare_isprint('!');
	compare_isprint('\n');
	compare_isprint(127);
	printf("\n");
}

static void	compare_isascii(int c)
{
	printf("ft_isascii: ");
	if (ft_isascii(c))
		printf("%c is ascii\n", c);
	else
		printf("not ascii\n");

	printf("isascii:    ");
	if (isascii(c))
		printf("%c is ascii\n", c);
	else
		printf("not ascii\n");
}

static void	test_ft_isascii(void)
{
	printf("\n--------------------TESTING FT_ISASCII----------------------\n\n");
	compare_isascii('f');
	compare_isascii('7');
	compare_isascii('*');
	compare_isascii(200);
	compare_isascii(-13);
	printf("\n");
}

static void	compare_isalnum(char c)
{
	printf("ft_isalnum: ");
	if (ft_isalnum(c))
		printf("%c is alphanumeric\n", c);
	else
		printf("%c is not alphanumeric\n", c);

	printf("isalnum:    ");
	if (isalnum(c))
		printf("%c is alphanumeric\n", c);
	else
		printf("%c is not alphanumeric\n", c);
}

static void	test_ft_isalnum(void)
{
	printf("\n--------------------TESTING FT_ISALNUM----------------------\n\n");
	compare_isalnum('A');
	compare_isalnum('p');
	compare_isalnum('4');
	compare_isalnum('!');
	compare_isalnum('*');
	printf("\n");
}

static void	compare_isdigit(char c)
{
	printf("ft_isdigit: ");
	if (isdigit(c))
		printf("%c is numeric\n", c);
	else
		printf("%c is not numeric\n", c);

	printf("isdigit:    ");
	if (isdigit(c))
		printf("%c is numeric\n", c);
	else
		printf("%c is not numeric\n", c);
}

static void	test_ft_isdigit(void)
{
	printf("\n--------------------TESTING FT_ISDIGIT---------------------\n\n");
	compare_isdigit('0');
	compare_isdigit('9');
	compare_isdigit('4');
	compare_isdigit('m');
	compare_isdigit('!');
	printf("\n");
}

static void	compare_isalpha(char c)
{
	printf("ft_isalpha: ");
	if (ft_isalpha(c))
		printf ("%c is alphabetic\n", c);
	else
		printf ("%c is not alphabetic\n", c);
	printf("isalpha:    ");
	if (isalpha(c))
		printf ("%c is alphabetic\n", c);
	else
		printf ("%c is not alphabetic\n", c);
}

static void	test_ft_isalpha(void)
{
	printf("\n--------------------TESTING FT_ISALPHA----------------------\n\n");
	compare_isalpha('A');
	compare_isalpha('z');
	compare_isalpha('m');
	compare_isalpha('4');
	compare_isalpha('!');
	printf("\n");
}

int	main(void)
{
	printf("----------------TESTING MANDATORY FUNCTIONS-----------------\n");
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();
	test_ft_memchr();
	return (0);
}

// --------------------FT_ATOI--------------------
// int	main(int argc, char **argv)
// {
// 	char	*nptr;

// 	if (argc != 2)
// 	{
// 		printf("Usage: [filename] [number]\n");
// 		return (1);
// 	}
// 	nptr = argv[1];
// 	printf("ft_atoi: %d\n", ft_atoi(nptr));
// 	printf("atoi: %d\n", atoi(nptr));
// 	printf("ft_atoi: %d\n", ft_atoi("2147483647"));
// 	printf("atoi: %d\n", atoi("2147483647"));
// 	printf("ft_atoi: %d\n", ft_atoi("-2147483648"));
// 	printf("atoi: %d\n", atoi("-2147483648"));
// 	printf("ft_atoi: %d\n", ft_atoi(NULL));
// 	return (0);
// }




// --------------------FT_CALLOC--------------------
/*
int	main(int argc, char **argv)
{
	int	*ptr1;
	int	*ptr2;
	int	nmemb;
	int	size;

	if (argc != 2)
	{
		printf("Usage: [filename] [number of members]\n");
		return (1);
	}
	nmemb = ft_atoi(argv[1]);
	size = 4;

	printf("ft_calloc: ");
	ptr1 = ft_calloc(nmemb, size);
	if (!ptr1)
		printf("NULL\n");
	else
		print_arr(ptr1, nmemb);
	free(ptr1);

	printf("calloc: ");
	ptr2 = calloc(nmemb, size);
	if (!ptr2)
		printf("NULL\n");
	else
		print_arr(ptr2, nmemb);
	free(ptr2);

	//Testing with size = 0
	printf("ft_calloc: ");
	ptr1 = ft_calloc(nmemb, 0);
	if (!ptr1)
		printf("NULL\n");
	else
		print_arr(ptr1, nmemb);
	free(ptr1);

	//testing with size = SIZE_MAX
	printf("ft_calloc: ");
	ptr1 = ft_calloc(2, SIZE_MAX);
	if (!ptr1)
		printf("NULL\n");
	else
		print_arr(ptr1, nmemb);
	free(ptr1);

	return (0);
}*/



//FT_ITOA
/*int	main(int argc, char **argv)
{
	char	*s;
	int		n;

	if (argc != 2)
	{
		printf("Usage: [filename] [number]\n");
		return (1);
	}
	n = ft_atoi(argv[1]);
	s = ft_itoa(n);
	if (!s)
		printf("NULL\n");
	else
		printf("%s\n", s);
	free(s);

	//testing with INT_MIN
	s = ft_itoa(INT_MIN);
	if (!s)
		printf("NULL\n");
	else
		printf("%s\n", s);
	free(s);

	return (0);
}*/

//FT_ITOA
/*int	main(int argc, char **argv)
{
	char	*s;
	int		n;

	if (argc != 2)
	{
		printf("Usage: [filename] [number]\n");
		return (1);
	}
	n = ft_atoi(argv[1]);
	s = ft_itoa(n);
	if (!s)
		printf("NULL\n");
	else
		printf("%s\n", s);
	free(s);

	//testing with INT_MIN
	s = ft_itoa(INT_MIN);
	if (!s)
		printf("NULL\n");
	else
		printf("%s\n", s);
	free(s);

	return (0);
}*/

//FT_LSTADD_BACK
/*void	del(void *content)
{
	if (content)
		free(content);
}

t_list	*build_list(int n)
{
	t_list	*lst;
	t_list	*new;

	lst = NULL;
	while (n > 0)
	{
		char *s = malloc(20);
		if (!s)
			return (NULL);
		sprintf(s, "banana%d", n - 1);
		new = ft_lstnew(s);
		if (!new)
		{
			free(s);
			return (NULL);
		}
		ft_lstadd_front(&lst, new);
		n--;
	}
	return (lst);
}

int	main(int argc, char **argv)
{
	t_list	*lst;
	t_list	*last;
	t_list	*new;
	char	*s;
	int		n;

	if (argc != 3)
	{
		printf("Usage: [filename] [string] [current number of elements]\n");
		return (1);
	}
	s = ft_strdup(argv[1]);
	n = ft_atoi(argv[2]);
	lst = build_list(n);
	if (!lst)
	{
		printf("Null list\n");
		return (1);
	}
	new = ft_lstnew(s);
	if (!new)
	{
		printf("New node null\n");
		return (1);
	}

	last = ft_lstlast(lst);
	if (!last)
		printf("Last element BEFORE: null\n");
	else
		printf("Last element BEFORE: %s\n", (char *)last->content);
	printf("Number of elements BEFORE: %d\n", ft_lstsize(lst));

	ft_lstadd_back(&lst, new);

	last = ft_lstlast(lst);
	if (!last)
		printf("Last element AFTER: null\n");
	else
		printf("Last element AFTER: %s\n", (char *)last->content);
	printf("Number of elements AFTER: %d\n", ft_lstsize(lst));

	ft_lstclear(&lst, del);
	return (0);
}*/

//FT_LSTADD_FRONT
/*int	main(int argc, char **argv)
{
	t_list	*lst;
	t_list	*new;
	char	*s;

	if (argc != 2)
	{
		printf("Usage: [filename] [string]\n");
		return (1);
	}
	s = argv[1];
	lst = ft_lstnew("old");
	new = ft_lstnew(s);
	printf("Before: %s\n", (char *)lst->content);
	ft_lstadd_front(&lst, new);
	if (!lst)
	{
		printf("NULL\n");
		return (1);
	}
	else if (lst->content)
		printf("After: %s\n", (char *)lst->content);
	else
		printf("After: null content\n");
	free(new);
	return (0);
}*/

//FT_LSTCLEAR
/*void	del(void *content)
{
	if (content)
		free(content);
}

t_list	*build_list(int n)
{
	t_list	*lst;
	t_list	*new;

	lst = NULL;
	while (n > 0)
	{
		char *s = malloc(20);
		if (!s)
			return (NULL);
		sprintf(s, "banana%d", n - 1);
		new = ft_lstnew(s);
		if (!new)
		{
			free(s);
			return (NULL);
		}
		ft_lstadd_front(&lst, new);
		n--;
	}
	return (lst);
}

int	main(int argc, char **argv)
{
	t_list	*lst;
	int		n;

	if (argc != 2)
	{
		printf("Usage: [filename] [number of elements]\n");
		return (1);
	}
	n = ft_atoi(argv[1]);
	lst = build_list(n);
	if (!lst)
	{
		printf("No list\n");
		return (1);
	}
	printf("Initial list:\n");
	print_list(lst);
	ft_lstclear(&lst, del);
	if (!lst)
		printf("Successfully cleared\n");
	else
		printf("Failure to clear\n");
	return (0);
}*/

//FT_LSTDELONE
/*void	del(void *content)
{
	if (content)
		free(content);
}

t_list	*build_list(int n)
{
	t_list	*lst;
	t_list	*new;

	lst = NULL;
	while (n > 0)
	{
		char *s = malloc(20);
		if (!s)
			return (NULL);
		sprintf(s, "banana%d", n - 1);
		new = ft_lstnew(s);
		if (!new)
		{
			free(s);
			return (NULL);
		}
		ft_lstadd_front(&lst, new);
		n--;
	}
	return (lst);
}

int	main(int argc, char **argv)
{
	t_list	*lst;
	t_list	*trav;
	int		n;
	int		i;
	int		size;

	if (argc != 3)
	{
		printf("Usage: [filename] [nbr elements] [index node to delete]\n");
		return (1);
	}
	n = ft_atoi(argv[1]);
	i = ft_atoi(argv[2]);
	lst = build_list(n);
	if (!lst)
	{
		printf("There is no list\n");
		return (1);
	}

	//find node to delete
	size = ft_lstsize(lst);
	if (i > size - 1)
	{
		printf("There is no ith node in the list\n");
		return (1);
	}
	trav = lst;
	while (i > 0)
	{
		trav = trav->next;
		i--;
	}

	ft_lstdelone(trav, del);

	printf("AFTER\n");
	print_list(lst);

	ft_lstclear(&lst, del);
	return (0);
}*/

//FT_LSTITER
/*void	test_f(void *content)
{
	if (!content)
		return ;
	ft_strlcpy(content, "I was transformed", 18);
}

void	del(void *content)
{
	if (content)
		free(content);
}

t_list	*build_list(int n)
{
	t_list	*lst;
	t_list	*new;

	lst = NULL;
	while (n > 0)
	{
		char *s = malloc(20);
		if (!s)
			return (NULL);
		sprintf(s, "banana%d", n - 1);
		new = ft_lstnew(s);
		if (!new)
		{
			free(s);
			return (NULL);
		}
		ft_lstadd_front(&lst, new);
		n--;
	}
	return (lst);
}

int	main(int argc, char **argv)
{
	t_list	*lst;
	int		n;

	if (argc != 2)
	{
		printf("Usage: [filename] [number of elements]\n");
		return (1);
	}
	n = ft_atoi(argv[1]);
	lst = build_list(n);
	if (!lst)
	{
		printf("No list\n");
		return (1);
	}
	printf("Initial list:\n");
	print_list(lst);

	ft_lstiter(lst, test_f);
	printf("Final list:\n");
	print_list(lst);

	ft_lstclear(&lst, del);
	return (0);
}*/

//FT_LSTLAST
/*void	del(void *content)
{
	if (content)
		free(content);
}

t_list	*build_list(int n)
{
	t_list	*lst;
	t_list	*new;

	lst = NULL;
	while (n > 0)
	{
		char *s = malloc(20);
		if (!s)
			return (NULL);
		sprintf(s, "banana%d", n);
		new = ft_lstnew(s);
		if (!new)
		{
			free(s);
			return (NULL);
		}
		ft_lstadd_front(&lst, new);
		n--;
	}
	return (lst);
}

int	main(int argc, char **argv)
{
	t_list	*lst;
	t_list	*last;
	int		n;

	if (argc != 2)
	{
		printf("Usage: [filename] [number of elements]\n");
		return (1);
	}
	n = ft_atoi(argv[1]);
	lst = build_list(n);
	if (!lst)
		printf("Null list\n");

	last = ft_lstlast(lst);
	if (!last)
		printf("Null node\n");
	else
		printf("Last element: %s\n", (char *)last->content);

	ft_lstclear(&lst, del);
	return (0);
}*/

//FT_LSTMAP
/*void	*test_f(void *content)
{
	void	*new_content;

	if (!content)
		return (NULL);
	new_content = malloc(14);
	if (!new_content)
		return (NULL);
	ft_strlcpy(new_content, "I'm brand new", 14);
	return (new_content);
}

void	del(void *content)
{
	if (content)
		free(content);
}

t_list	*build_list(int n)
{
	t_list	*lst;
	t_list	*new;

	lst = NULL;
	while (n > 0)
	{
		char *s = malloc(20);
		if (!s)
			return (NULL);
		sprintf(s, "banana%d", n - 1);
		new = ft_lstnew(s);
		if (!new)
		{
			free(s);
			return (NULL);
		}
		ft_lstadd_front(&lst, new);
		n--;
	}
	return (lst);
}

int	main(int argc, char **argv)
{
	t_list	*lst;
	t_list	*new_lst;
	int		n;

	if (argc != 2)
	{
		printf("Usage: [filename] [number of elements]\n");
		return (1);
	}
	n = ft_atoi(argv[1]);
	lst = build_list(n);
	if (!lst)
	{
		printf("No old list\n");
		return (1);
	}

	new_lst = ft_lstmap(lst, test_f, del);
	if (!new_lst)
	{
		printf("No new list\n");
		ft_lstclear(&lst, del);
		return (1);
	}

	printf("Old list:\n");
	print_list(lst);
	printf("\nNew list:\n");
	print_list(new_lst);

	ft_lstclear(&lst, del);
	ft_lstclear(&new_lst, del);
	return (0);
}*/

//FT_LSTNEW
/*int	main(int argc, char **argv)
{
	char	*s;
	t_list	*new;

	if (argc != 2)
	{
		printf("Usage: [filename] [string]\n");
		return (1);
	}
	s = argv[1];
	new = ft_lstnew(s);
	if (!new)
		printf("NULL\n");
	else if (new->content)
	{
		printf("%s\n", (char *)new->content);
		free (new);
	}
	else
	{
		printf("null content\n");
		free (new);
	}

	new = ft_lstnew(NULL);
	if (!new)
		printf("NULL\n");
	else if (new->content)
	{
		printf("%s\n", (char *)new->content);
		free (new);
	}
	else
	{
		printf("null content\n");
		free (new);
	}

	return (0);
}*/


//FT_LSTSIZE
/*void	del(void *content)
{
	if (content)
		free(content);
}

t_list	*build_list(int n)
{
	t_list	*lst;
	t_list	*new;

	lst = NULL;
	while (n > 0)
	{
		char *s = malloc(20);
		if (!s)
			return (NULL);
		sprintf(s, "banana%d", n - 1);
		new = ft_lstnew(s);
		if (!new)
		{
			free(s);
			return (NULL);
		}
		ft_lstadd_front(&lst, new);
		n--;
	}
	return (lst);
}

int	main(int argc, char **argv)
{
	t_list	*lst;
	int		n;

	if (argc != 2)
	{
		printf("Usage: [filename] [number of elements]\n");
		return (1);
	}
	n = ft_atoi(argv[1]);
	lst = build_list(n);
	if (!lst)
	{
		printf("Null list\n");
		return (1);
	}
	print_list(lst);
	printf("Number of elements: %d\n", ft_lstsize(lst));
	ft_lstclear(&lst, del);
	return (0);
}*/



//FT_MEMCMP
/*int	main(int argc, char **argv)
{
	const char	*s1;
	const char	*s2;
	int			n;
	int			arr1[5] = {0, 1, 2, 3, 4};
	int			arr2[5] = {0, 1, 2, 7, 9};

	if (argc != 4)
	{
		printf("Usage: [filename] [string 1] [string 2] [size]\n");
		return (1);
	}
	s1 = argv[1];
	s2 = argv[2];
	n = ft_atoi(argv[3]);

	//testing with strings
	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, n));
	printf("memcmp: %d\n", memcmp(s1, s2, n));

	printf("ft_memcmp: %d\n", ft_memcmp("test\0", "test\1", 5));
	printf("memcmp: %d\n", memcmp("test\0", "test\1", 5));

	printf("ft_memcmp: %d\n", ft_memcmp("\x80", "\x81", 1));
	printf("memcmp: %d\n", memcmp("\x80", "\x81", 1));

	//testing with int array
	n *= sizeof(int);
	printf("ft_memcmp: %d\n", ft_memcmp(arr1, arr2, n));
	printf("memcmp: %d\n", memcmp(arr1, arr2, n));

	return (0);
}*/

//FT_PUTCHAR_FD
/*int	main(int argc, char **argv)
{
	char	c;

	if (argc != 2)
	{
		printf("Usage: [filename] [character]\n");
		return (1);
	}
	c = argv[1][0];
	ft_putchar_fd(c, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/

//FT_PUTENDL_FD
/*int	main(int argc, char **argv)
{
	char	*s;

	if (argc != 2)
	{
		printf("Usage: [filename] [string]\n");
		return (1);
	}
	s = argv[1];
	ft_putendl_fd(s, 1);
	return (0);
}*/

//FT_PUTNBR_FD
/*int	main(int argc, char **argv)
{
	int	n;

	if (argc != 2)
	{
		ft_putstr_fd("Usage: [filename] [number]\n", 1);
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

//FT_PUTSTR_FD
/*int	main(int argc, char **argv)
{
	char	*s;

	if (argc != 2)
	{
		printf("Usage: [filename] [string]\n");
		return (1);
	}
	s = argv[1];
	ft_putstr_fd(s, 1);
	ft_putstr_fd("\n", 1);
	return (0);
}*/

//FT_SPLIT
/*int	main(int argc, char **argv)
{
	char	**arr;
	char	*s;
	char	c;
	int		i;

	if (argc != 3)
	{
		printf("Usage: [filename] [string] [delimiter character]\n");
		return (1);
	}
	s = argv[1];
	c = argv[2][0];
	arr = ft_split(s, c);
	if (!arr)
	{
		printf("NULL\n");
		return (1);
	}
	i = 0;
	while (arr[i])
	{
		printf("arr[%d]: %s\n", i, arr[i]);
		i++;
	}

	//free memory
	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}*/


//FT_STRDUP
/*int	main(int argc, char **argv)
{
	char	*src;
	char	*dst1;
	char	*dst2;

	if (argc != 2)
	{
		printf("Usage: [filename] [source string]\n");
		return (1);
	}
	src = argv[1];

	dst1 = ft_strdup(src);
	if (!dst1)
		printf("ft_strdup: NULL\n");
	else
		printf("ft_strdup: %s\n", dst1);
	free(dst1);

	dst2 = strdup(src);
	if (!dst2)
		printf("strdup: NULL\n");
	else
		printf("strdup: %s\n", dst2);
	free(dst2);

	return (0);
}*/

//FT_STRITERI
/*void	testf(unsigned int i, char *c)
{
	if (i > 0 && i % 3 == 0)
		*c = '5';
	else if(i > 0 && i % 5 == 0)
		*c = '3';
}

int	main(void)
{
	char	str[13] = "hello banana";

	ft_striteri(str, testf);
	printf("%s\n", str);
	return (0);
}*/


//FT_STRJOIN
/*int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	char	*sjoin;

	if (argc != 3)
	{
		printf("Usage: [filename] [string 1] [string 2]\n");
		return (1);
	}
	s1 = argv[1];
	s2 = argv[2];
	sjoin = ft_strjoin(s1, s2);
	if (!sjoin)
		printf("NULL\n");
	else
		printf("%s\n", sjoin);
	free(sjoin);
	return (0);
}*/

//FT_STRMAPI
/*char	testf(unsigned int i, char c)
{
	if (i > 0 && i % 3 == 0)
		return ('5');
	else if (i > 0 && i % 5 == 0)
		return ('3');
	else
		return (c);
}

int	main(int argc, char **argv)
{
	char	*src;
	char	*dst;

	if (argc != 2)
	{
		printf("Usage: [filename] [source string]\n");
		return (1);
	}
	src = argv[1];
	dst = ft_strmapi(src, testf);
	if (!dst)
	{
		printf("NULL\n");
		return (1);
	}
	printf("%s\n", dst);
	free(dst);
	return (0);
}*/


//FT_STRNSTR
/*int	main(int argc, char **argv)
{
	char	*str;
	char	*sub;
	int		n;

	if (argc != 4)
	{
		printf("Usage: [filename] [main string] [substring] [length]\n");
		return (1);
	}
	str = argv[1];
	sub = argv[2];
	n = ft_atoi(argv[3]);
	printf("ft_strnstr: %s\n", ft_strnstr(str, sub, n));
	//printf("strnstr: %s\n", strnstr(main, sub, n));
	printf("ft_strnstr: %s\n", ft_strnstr(str, str, n));
	//printf("strnstr: %s\n", strnstr(main, main, n));
	return (0);
}*/

//FT_STRTRIM
/*int	main(int argc, char **argv)
{
	char	*s;
	char	*set;
	char	*strim;

	if (argc != 3)
	{
		printf("Usage: [filename] [string] [set of characters]\n");
		return (1);
	}
	s = argv[1];
	set = argv[2];
	strim = ft_strtrim(s, set);
	if (!strim)
		printf("NULL\n");
	else
		printf("%s\n", strim);
	free(strim);
	return (0);
}*/

//FT_SUBSTR
/*int	main(int argc, char **argv)
{
	char	*s;
	char	*sub;
	int		start;
	int		len;

	if (argc != 4)
	{
		printf("Usage: ./a.out [string] [start] [max length]\n");
		return (1);
	}
	s = argv[1];
	start = ft_atoi(argv[2]);
	len = ft_atoi(argv[3]);
	sub = ft_substr(s, start, len);
	if (!sub)
		printf("NULL\n");
	else
		printf("%s\n", sub);
	free(sub);
	return (0);
}*/
