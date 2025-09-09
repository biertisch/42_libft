#include "../include/libft.h"
#include <ctype.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

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


// --------------------FT_BZERO--------------------
// int	main(int argc, char **argv)
// {
// 	char	str1[6] = "hello";
// 	char	str2[6] = "hello";
// 	int		arr1[6] = {1, 2, 3, 4, 5, 6};
// 	int		arr2[6] = {1, 2, 3, 4, 5, 6};
// 	int		n;
// 	int		start;

// 	if (argc != 3)
// 	{
// 		printf("Usage: [filename] [number of elements] [start]\n");
// 		return (1);
// 	}
// 	n = ft_atoi(argv[1]);
// 	start = ft_atoi(argv[2]);
// 	if (n > 6 || start > 6)
// 	{
// 		printf("Arguments must be between 0 and 6\n");
// 		return (1);
// 	}
// 	while (n + start > 6)
// 		n--;

// 	//testing with string
// 	ft_bzero(str1 + start, n);
// 	printf("ft_bzero: %s\n", str1);
// 	bzero(str2 + start, n);
// 	printf("bzero: %s\n", str2);

// 	//testing with int array
// 	ft_bzero(arr1 + start, sizeof(int) * n);
// 	printf("ft_bzero: ");
// 	print_arr(arr1);

// 	bzero(arr2 + start, sizeof(int) * n);
// 	printf("bzero: ");
// 	print_arr(arr2);

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

//FT_ISALNUM
/*int	main(int argc, char **argv)
{
	char	c;

	if (argc != 2)
	{
		printf("Usage: [filename] [character]\n");
		return (1);
	}
	c = argv[1][0];

	printf("ft_isalnum: ");
	if (ft_isalnum(c))
		printf("%c is alphanumeric\n", c);
	else
		printf("%c is not alphanumeric\n", c);

	printf("isalnum: ");
	if (isalnum(c))
		printf("%c is alphanumeric\n", c);
	else
		printf("%c is not alphanumeric\n", c);

	return (0);
}*/

//IS_ALPHA
/*int	main(int argc, char** argv)
{
	char	c;

	if (argc != 2)
	{
		printf("Usage: [filename] [character]\n");
		return (1);
	}
	c = argv[1][0];

	printf("ft_isalpha: ");
	if (ft_isalpha(c))
		printf ("%c is alphabetic\n", c);
	else
		printf ("%c is not alphabetic\n", c);

	printf("isalpha: ");
	if (isalpha(c))
		printf ("%c is alphabetic\n", c);
	else
		printf ("%c is not alphabetic\n", c);

	return (0);
}*/

//IS_ASCII
/*int	main(int argc, char **argv)
{
	int	c;

	if (argc != 2)
	{
		printf("Usage: [filename] [character code]\n");
		return (1);
	}
	c = ft_atoi(argv[1]);

	printf("ft_isascii: ");
	if (ft_isascii(c))
		printf("ascii\n");
	else
		printf("not ascii\n");

	printf("isascii: ");
	if (isascii(c))
		printf("ascii\n");
	else
		printf("not ascii\n");

	return (0);
}*/

//FT_ISDIGIT
/*int	main(int argc, char** argv)
{
	char	c;

	if (argc != 2)
	{
		printf("Usage: [filename] [character]\n");
		return (1);
	}
	c = argv[1][0];

	printf("ft_isdigit: ");
	if (isdigit(c))
		printf("%c is numeric\n", c);
	else
		printf("%c is not numeric\n", c);

	printf("isdigit: ");
	if (isdigit(c))
		printf("%c is numeric\n", c);
	else
		printf("%c is not numeric\n", c);

	return (0);
}*/

//FT_ISPRINT
/*int	main(int argc, char **argv)
{
	int	c;

	if (argc != 2)
	{
		printf("Usage: [filename] [character code]\n");
		return (1);
	}
	c = ft_atoi(argv[1]);

	printf("ft_isprint: ");
	if(ft_isprint(c))
		printf("printable\n");
	else
		printf("not printable\n");

	printf("isprint: ");
	if(isprint(c))
		printf("printable\n");
	else
		printf("not printable\n");

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

//FT_MEMCHR
/*int	main(int argc, char **argv)
{
	char	*s;
	char	c;
	int	n;

	if (argc != 4)
	{
		printf("Usage: [filename] [string] [character] [size]\n");
		return (1);
	}
	s = argv[1];
	c = argv[2][0];
	n = ft_atoi(argv[3]);

	printf("Testing with ft_memchr: %s\n", (char *)ft_memchr(s, c, n));
	printf("Testing with memchr: %s\n", (char *)memchr(s, c, n));

	printf("Testing with ft_memchr: %s\n", (char *)ft_memchr(s, '\0', n));
	printf("Testing with memchr: %s\n", (char *)memchr(s, '\0', n));

	printf("Testing with ft_memchr: %s\n", (char *)ft_memchr(s, s[0] + 256, n));
	printf("Testing with memchr: %s\n", (char *)memchr(s, s[0] + 256, n));

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


//FT_MEMCPY
/*
int	main(int argc, char **argv)
{
	char	*src;
	char	dst1[30] = "world";
	char	dst2[30] = "world";
	int		arr_src[5] = {9, 8, 7, 6, 5};
	int		arr_dst1[5] = {0, 1, 2, 3, 4};
	int		arr_dst2[5] = {0, 1, 2, 3, 4};
	int		n;

	if (argc != 3)
	{
		printf("Usage: [filename] [source string] [number of elements]\n");
		return (1);
	}
	src = argv[1];
	n = ft_atoi(argv[2]);

	//testing with string
	ft_memcpy(dst1, src, n);
	printf("ft_memcpy: %s\n", dst1);
	memcpy(dst2, src, n);
	printf("memcpy: %s\n", dst2);

	ft_memcpy(dst1, dst1, n);
	printf("ft_memcpy: %s\n", dst1);

	//testing with int array
	ft_memcpy(arr_dst1, arr_src, sizeof(int) * n);
	printf("ft_memcpy: ");
	print_arr(arr_dst1);

	memcpy(arr_dst2, arr_src, sizeof(int) * n);
	printf("memcpy: ");
	print_arr(arr_dst2);

	return (0);
}*/

//FT_MEMMOVE
/*
int	main(int argc, char **argv)
{
	char	str1[7] = "abcdef";
	char	str2[7] = "abcdef";
	char	str3[7] = "abcdef";
	char	str4[7] = "abcdef";
	int		arr1[7] = {0, 1, 2, 3, 4, 5, 6};
	int		arr2[7] = {0, 1, 2, 3, 4, 5, 6};
	int		arr3[7] = {0, 1, 2, 3, 4, 5, 6};
	int		arr4[7] = {0, 1, 2, 3, 4, 5, 6};
	int		start;
	int		n;

	if (argc != 3)
	{
		printf("Usage: [filename] [number of elements] [start]\n");
		return (1);
	}
	n = ft_atoi(argv[1]);
	start = ft_atoi(argv[2]);
	while(n + start > 7)
		n--;

	//testing with string
	ft_memmove(str1 + start, str1, n);
	printf("ft_memmove: %s\n", str1);
	memmove(str2 + start, str2, n);
	printf("memmove: %s\n", str2);

	ft_memmove(str3, str3 + start, n);
	printf("ft_memmove: %s\n", str3);
	memmove(str4, str4 + start, n);
	printf("memmove: %s\n", str4);

	//testing with int array
	ft_memmove(arr1 + start, arr1, sizeof(int) * n);
	printf("ft_memmove: ");
	print_arr(arr1);
	memmove(arr2 + start, arr2, sizeof(int) * n);
	printf("memmove: ");
	print_arr(arr2);

	ft_memmove(arr3, arr3 + start, sizeof(int) * n);
	printf("ft_memmove: ");
	print_arr(arr3);
	memmove(arr4, arr4 + start, sizeof(int) * n);
	printf("memmove: ");
	print_arr(arr4);

	return (0);
}*/


//FT_MEMSET
/*
int	main(int argc, char **argv)
{
	char	str1[6] = "hello";
	char	str2[6] = "hello";
	char	str3[6] = "";
	char	str4[6] = "";
	char	str5[7] = "banana";
	char	str6[7] = "banana";
	int		arr1[5] = {1, 2, 3, 4, 5};
	int		arr2[5] = {1, 2, 3, 4, 5};
	char	c;
	int		n;

	if (argc != 3)
	{
		printf("Usage: [filename] [character] [number of members]\n");
		return (1);
	}
	c = argv[1][0];
	n = ft_atoi(argv[2]);

	//testing with string
	ft_memset(str1, c, n);
	printf("ft_memset: %s\n", str1);
	memset(str2, c, n);
	printf("memset: %s\n", str2);

	//testing with empty string
	ft_memset(str3, c, n);
	printf("ft_memset: %s\n", str3);
	memset(str4, c, n);
	printf("memset: %s\n", str4);

	//testing with non-ascii character
	ft_memset(str5, 256, n);
	printf("ft_memset: %s\n", str5);
	memset(str6, 256, n);
	printf("memset: %s\n", str6);

	//testing with int array
	printf("ft_memset: ");
	ft_memset(arr1, 0, sizeof(int) * n);
	print_arr(arr1);

	printf("memset: ");
	memset(arr2, 0, sizeof(int) * n);
	print_arr(arr2);

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

//FT_STRCHR
/*int	main(int argc, char **argv)
{
	char	*s;
	char	c;

	if (argc != 3)
	{
		printf("Usage: [filename] [string] [character]\n");
		return (1);
	}
	s = argv[1];
	c = argv[2][0];
	printf("ft_strchr: %s\n", ft_strchr(s, c));
	printf("strchr: %s\n", strchr(s, c));
	printf("ft_strchr: %s\n", ft_strchr(s, '\0'));
	printf("strchr: %s\n", strchr(s, '\0'));
	printf("ft_strchr: %s\n", ft_strchr("", '\0'));
	printf("strchr: %s\n", strchr("", '\0'));
	printf("ft_strchr: %s\n", ft_strchr(s, s[0] + 256));
	printf("strchr: %s\n", strchr(s, s[0] + 256));
	printf("ft_strchr: %s\n", ft_strchr(s, 256));
	printf("strchr: %s\n", strchr(s, 256));
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

//FT_STRLCAT
/*int	main(int argc, char **argv)
{
	char	dst1[50] = "hello";
	char	dst2[50] = "hello";
	char	dst3[8] = "";
	char	dst4[8] = "";
	char	*src;
	int		size;

	if (argc != 3)
	{
		printf("Usage: [filename] [source string] [size]\n");
		return (1);
	}
	src = argv[1];
	size = ft_atoi(argv[2]);
	printf("ft_strlcat: %zu\n", ft_strlcat(dst1, src, size));
	printf("Destination string: %s\n", dst1);
	printf("strlcat: %zu\n", strlcat(dst2, src, size));
	printf("Destination string: %s\n", dst2);

	printf("ft_strlcat: %zu\n", ft_strlcat(dst3, src, size));
	printf("Destination string: %s\n", dst3);
	printf("strlcat: %zu\n", strlcat(dst4, src, size));
	printf("Destination string: %s\n", dst4);

	return (0);
}*/


//FT_STRLCPY
/*int	main(int argc, char **argv)
{
	char	dst1[50] = "hello";
	char	dst2[50] = "hello";
	char	*src;
	int		size;

	if (argc != 3)
	{
		printf("Usage: [filename] [source string] [size]\n");
		return (1);
	}
	src = argv[1];
	size = atoi(argv[2]);
	printf("ft_strlcpy: %zu\n", ft_strlcpy(dst1, src, size));
	printf("Destination string: %s\n", dst1);
	printf("strlcpy: %zu\n", strlcpy(dst2, src, size));
	printf("Destination string: %s\n", dst2);
	return (0);
}*/

//FT_STRLEN
/*int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage: [filename] [string]\n");
		return (1);
	}
	printf("ft_strlen: %zu\n", ft_strlen(argv[1]));
	printf("strlen: %zu\n", strlen(argv[1]));
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


//FT_STRNCMP
/*int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	int		n;

	if (argc != 4)
	{
		printf("Usage: [filename] [string 1] [string 2] [length]\n");
		return (1);
	}
	s1 = argv[1];
	s2 = argv[2];
	n = atoi(argv[3]);
	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
	printf("strncmp: %d\n", strncmp(s1, s2, n));
	printf("ft_strncmp: %d\n", ft_strncmp("test\0", "test\1", 5));
	printf("strncmp: %d\n", strncmp("test\0", "test\1", 5));
	printf("ft_strncmp: %d\n", ft_strncmp("\0", "\200", 1));
	printf("strncmp: %d\n", strncmp("\0", "\200", 1));
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

//FT_STRRCHR
/*int	main(int argc, char **argv)
{
	char	*s;
	char	c;

	if (argc != 3)
	{
		printf("Usage: [filename] [string] [character]\n");
		return (1);
	}
	s = argv[1];
	c = argv[2][0];
	printf("ft_strrchr: %s\n", ft_strrchr(s, c));
	printf("strrchr: %s\n", strrchr(s, c));
	printf("ft_strrchr: %s\n", ft_strrchr(s, '\0'));
	printf("strrchr: %s\n", strrchr(s, '\0'));
	printf("ft_strrchr: %s\n", ft_strrchr("", '\0'));
	printf("strrchr: %s\n", strrchr("", '\0'));
	printf("ft_strrchr: %s\n", ft_strrchr(s, s[0] + 256));
	printf("strrchr: %s\n", strrchr(s, s[0] + 256));
	printf("ft_strrchr: %s\n", ft_strrchr(s, 256));
	printf("strrchr: %s\n", strrchr(s, 256));
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

//FT_TOLOWER
/*int	main(int argc, char **argv)
{
	char	c;

	if (argc != 2)
	{
		printf("Usage: [filename] [character]\n");
		return (1);
	}
	c = argv[1][0];
	printf("ft_tolower: %c\n", ft_tolower(c));
	c = argv[1][0];
	printf("tolower: %c\n", tolower(c));
	return (0);
}*/

//FT_TOUPPER
/*int	main(int argc, char **argv)
{
	char	c;

	if (argc != 2)
	{
		printf("Usage: [filename] [character]\n");
		return (1);
	}
	c = argv[1][0];
	printf("ft_toupper: %c\n", ft_toupper(c));
	c = argv[1][0];
	printf("toupper: %c\n", toupper(c));
	return (0);
}*/