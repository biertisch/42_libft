/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:28:53 by beatde-a          #+#    #+#             */
/*   Updated: 2025/09/12 14:53:26 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	print_ft_putnbr_fd(int n, int fd)
{
	printf("Testing with n=%d fd=%d\n", n, fd);
	ft_putnbr_fd(n, fd);
	write(1, "\n\n", 2);
}

static void	test_ft_putnbr_fd(void)
{
	printf("\n------------------TESTING FT_PUTNBR_FD---------------------\n\n");

	print_ft_putnbr_fd(0, 1);
	print_ft_putnbr_fd(42, 1);
	print_ft_putnbr_fd(+70, 1);
	print_ft_putnbr_fd(-423, 1);
	print_ft_putnbr_fd(INT_MAX, 1);
	print_ft_putnbr_fd(INT_MIN, 1);
}

static void	print_ft_putendl_fd(char *s, int fd)
{
	printf("Testing with s='%s' fd=%d\n", s, fd);
	ft_putendl_fd(s, fd);
	write(1, "\n\n", 2);
}

static void	test_ft_putendl_fd(void)
{
	printf("\n------------------TESTING FT_PUTENDL_FD---------------------\n\n");

	print_ft_putendl_fd("hello world", 1);
	print_ft_putendl_fd("\t\ttesting", 1);
	print_ft_putendl_fd("", 1);
	print_ft_putendl_fd(NULL, 1);
}

static void	print_ft_putstr_fd(char *s, int fd)
{
	printf("Testing with s='%s' fd=%d\n", s, fd);
	ft_putstr_fd(s, fd);
	write(1, "\n\n", 2);
}

static void	test_ft_putstr_fd(void)
{
	printf("\n------------------TESTING FT_PUTSTR_FD---------------------\n\n");

	print_ft_putstr_fd("hello world", 1);
	print_ft_putstr_fd("\t\ttesting", 1);
	print_ft_putstr_fd("", 1);
	print_ft_putstr_fd(NULL, 1);
}

static void	print_ft_putchar_fd(char c, int fd)
{
	printf("Testing with c='%c' fd=%d\n", c, fd);
	ft_putchar_fd(c, fd);
	write(1, "\n\n", 2);
}

static void	test_ft_putchar_fd(void)
{
	printf("\n------------------TESTING FT_PUTCHAR_FD---------------------\n\n");

	print_ft_putchar_fd('o', 1);
	print_ft_putchar_fd('9', 1);
	print_ft_putchar_fd('!', 1);
	print_ft_putchar_fd('\n', 1);
}

static void	test_f2(unsigned int i, char *c)
{
	if (i > 0 && i % 4 == 0)
		*c = '7';
	else if(i > 0 && i % 7 == 0)
		*c = '4';
}

static void	print_ft_striteri(char *s, void *f)
{
	printf("Testing with s='%s'\n", s);
	ft_striteri(s, f);
	printf("%s\n\n", s);
}

static void	test_ft_striteri(void)
{
	printf("\n-------------------TESTING FT_STRITERI----------------------\n\n");

	char s1[] = "oh no, not again!";
	char s2[] = "hello banana";
	char s3[] = "";

	print_ft_striteri(s1, test_f2);
	print_ft_striteri(s2, test_f2);
	print_ft_striteri(s3, test_f2);
}

char	test_f1(unsigned int i, char c)
{
	if (i > 0 && i % 3 == 0)
		return ('5');
	else if (i > 0 && i % 5 == 0)
		return ('3');
	return (c);
}

static void	print_ft_strmapi(char *s, void *f)
{
	char *res;

	printf("Testing with s='%s'\n", s);
	res = ft_strmapi(s, f);
	if (!res)
		printf("(null)");
	else
		printf("%s", res);
	free(res);
	printf("\n\n");
}

static void	test_ft_strmapi(void)
{
	printf("\n-------------------TESTING FT_STRMAPI-----------------------\n\n");

	print_ft_strmapi("hello world", test_f1);
	print_ft_strmapi("I wonder what is happening to me?", test_f1);
	print_ft_strmapi("", test_f1);
	print_ft_strmapi(NULL, test_f1);
}

static void	print_ft_itoa(int n)
{
	char *nbr;

	printf("Testing with n=%d\n", n);
	nbr = ft_itoa(n);
	if (!nbr)
		printf("(null)");
	else
		printf("%s", nbr);
	free(nbr);
	printf("\n\n");
}

static void	test_ft_itoa(void)
{
	printf("\n---------------------TESTING FT_ITOA------------------------\n\n");

	print_ft_itoa(0);
	print_ft_itoa(42);
	print_ft_itoa(+70);
	print_ft_itoa(-423);
	print_ft_itoa(INT_MAX);
	print_ft_itoa(INT_MIN);
}

static void	print_ft_split(char *s, char c)
{
	char **split;
	int i = 0;

	printf("Testing with s='%s' c='%c'\n", s, c);
	split = ft_split(s, c);
	if (!split)
		printf("(null)");
	else
		while (split[i])
			printf("%s", split[i++]);
	tested_free_string_array(split);
	printf("\n\n");
}

static void	test_ft_split(void)
{
	printf("\n---------------------TESTING FT_SPLIT-----------------------\n\n");

	print_ft_split("hello world", ' ');
	print_ft_split("hello world", 'w');
	print_ft_split("hello world", '\0');
	print_ft_split("", 'w');
	print_ft_split(NULL, 'w');
}

static void	print_ft_strtrim(char *s, char *set)
{
	char *trim;

	printf("Testing with s='%s' set='%s'\n", s, set);
	trim = ft_strtrim(s, set);
	if (!trim)
		printf("(null)");
	else
		printf("%s", trim);
	free(trim);
	printf("\n\n");
}

static void	test_ft_strtrim(void)
{
	printf("\n--------------------TESTING FT_STRTRIM----------------------\n\n");

	print_ft_strtrim("\t hello ", "\t ");
	print_ft_strtrim("hello world", "ldw");
	print_ft_strtrim("hello world", "w");
	print_ft_strtrim("", "w");
	print_ft_strtrim("hello world", "");
	print_ft_strtrim(NULL, "ldw");
	print_ft_strtrim("hello world", NULL);
}

static void	print_ft_strjoin(char *s1, char *s2)
{
	char *join;

	printf("Testing with s1='%s' s2='%s'\n", s1, s2);
	join = ft_strjoin(s1, s2);
	if (!join)
		printf("(null)");
	else
		printf("%s", join);
	free(join);
	printf("\n\n");
}

static void	test_ft_strjoin(void)
{
	printf("\n--------------------TESTING FT_STRJOIN----------------------\n\n");

	print_ft_strjoin("hello ", "world");
	print_ft_strjoin("hello ", "            w o r l d ");
	print_ft_strjoin("", "world");
	print_ft_strjoin("hello ", "");
	print_ft_strjoin("hello ", NULL);
}

static void	print_ft_substr(char *s, int start, int len)
{
	char *sub;

	printf("Testing with s='%s' start=%d len=%d\n", s, start, len);
	sub = ft_substr(s, start, len);
	if (!sub)
		printf("(null)");
	else
		printf("%s", sub);
	free(sub);
	printf("\n\n");
}

static void	test_ft_substr(void)
{
	printf("\n--------------------TESTING FT_SUBSTR-----------------------\n\n");

	print_ft_substr("hello world", 5, 5);
	print_ft_substr("hello world", 0, 5);
	print_ft_substr("hello world", 5, 2);
	print_ft_substr("", 5, 5);
	print_ft_substr(NULL, 5, 5);
}

static void	compare_strdup(char *src)
{
	char *dup;

	printf("Testing with src='%s'\n", src);
	printf("ft_strdup: ");
	dup = ft_strdup(src);
	printf("%s", dup);
	free(dup);
	printf("\n");

	printf("strdup:    ");
	dup = strdup(src);
	printf("%s", dup);
	free(dup);
	printf("\n\n");
}

static void	test_ft_strdup(void)
{
	printf("\n--------------------TESTING FT_STRDUP-----------------------\n\n");

	compare_strdup("hello");
	compare_strdup("   h   e    l l         o ");
	compare_strdup(" ");
	compare_strdup("");
	//compare_strdup(NULL); //segfault - expected behaviour
}

static void	compare_calloc(int n, long size)
{
	int *ptr;

	printf("Testing with nmemb=%d and size=%ld\n", n, size);
	printf("ft_calloc: ");
	ptr = ft_calloc(n, size);
	if (!ptr)
		printf("(null)");
	else if (n == 0 || size == 0)
		printf("valid pointer with empty allocation");
	else
		tested_print_int_array(ptr, n);
	free(ptr);
	printf("\n");

	printf("calloc:    ");
	ptr = calloc(n, size);
	if (!ptr)
		printf("(null)\n");
	else if (n == 0 || size == 0)
		printf("valid pointer with empty allocation");
	else
		tested_print_int_array(ptr, n);
	free(ptr);
	printf("\n\n");
}

static void	test_ft_calloc(void)
{
	printf("\n--------------------TESTING FT_CALLOC-----------------------\n\n");

	compare_calloc(5, sizeof(int));
	compare_calloc(10, sizeof(int));
	compare_calloc(0, sizeof(int)); //behaviour may vary, but valid pointer is expected
	compare_calloc(2, 0); //behaviour may vary, but valid pointer is expected
	compare_calloc(2, SIZE_MAX);
}

static void	compare_atoi(char *s)
{
	printf("Testing with s='%s'\n", s);
	printf("ft_atoi: %d\n", ft_atoi(s));
	printf("atoi:    %d\n", atoi(s));
	printf("\n");
}

static void	test_ft_atoi(void)
{
	printf("\n---------------------TESTING FT_ATOI------------------------\n\n");

	compare_atoi("0");
	compare_atoi("42");
	compare_atoi("+2");
	compare_atoi("-423");
	compare_atoi("2147483647");
	compare_atoi("2147483648");
	compare_atoi("-2147483648");
	compare_atoi("-2147483649");
	compare_atoi("8172abc");
	compare_atoi(" 947");
	compare_atoi("hello world");
	//compare_atoi(NULL); //segfault - expected behaviour
}

static void	compare_strnstr(char *src, char *sub, int len)
{
	printf("Testing with src='%s' sub='%s' len=%d\n", src, sub, len);
	printf("ft_strnstr: %s\n", ft_strnstr(src, sub, len));
	//printf("strnstr:    %s\n", strnstr(src, sub, len)); //BSD extension
	printf("\n");
}

static void	test_ft_strnstr(void)
{
	printf("\n--------------------TESTING FT_STRNSTR----------------------\n\n");

	compare_strnstr("hello world", "world", 15);
	compare_strnstr("hello world", "world", 6);
	compare_strnstr("hello", "world", 10);
	compare_strnstr("hello world", "ll", 10);
}

static void	compare_memcmp_array(int *arr1, int *arr2, int size, int arr_size)
{
	printf("Testing with arr1={");
	tested_print_int_array(arr1, arr_size);
	printf("} s2={");
	tested_print_int_array(arr2, arr_size);
	printf("} size=%d*sizeof(int)\n", size);
	printf("ft_memcmp: %d\n", ft_memcmp(arr1, arr2, size * sizeof(int)));
	printf("memcmp:    %d\n", memcmp(arr1, arr2, size * sizeof(int)));
	printf("\n");
}

static void	compare_memcmp_string(char *s1, char *s2, int size)
{
	printf("Testing with s1='%s' s2='%s' size=%d\n", s1, s2, size);
	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, size));
	printf("memcmp:    %d\n", memcmp(s1, s2, size));
	printf("\n");
}

static void	test_ft_memcmp(void)
{
	printf("\n---------------------TESTING FT_MEMCMP----------------------\n\n");

	compare_memcmp_string("hello", "hello world", 5);
	compare_memcmp_string("hello", "hello world", 6);
	compare_memcmp_string("hello", "world", 10);
	compare_memcmp_string("test\0", "test\1", 5);
	compare_memcmp_string("\0", "\200", 1);

	int arr1[5] = {0, 1, 2, 3, 4};
	int arr2[5] = {0, 1, 2, 7, 9};
	compare_memcmp_array(arr1, arr2, 3, 5);
	compare_memcmp_array(arr1, arr2, 5, 5);
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
	printf("Testing with s1='%s' s2='%s' len=%d\n", s1, s2, len);
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
	printf("Testing with s='%s' c='%c'\n", s, c);
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
	printf("Testing with s='%s' c='%c'\n", s, c);
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
	printf("ft_tolower: '%c' becomes '%c'\n", c, ft_tolower(c));
	printf("tolower:    '%c' becomes '%c'\n", c, tolower(c));
	printf("\n");
}

static void	test_ft_tolower(void)
{
	printf("\n---------------------TESTING FT_TOLOWER---------------------\n\n");

	compare_tolower('D');
	compare_tolower('A');
	compare_tolower('j');
	compare_tolower('3');
	compare_tolower('!');
}

static void	compare_toupper(char c)
{
	printf("ft_toupper: '%c' becomes '%c'\n", c, ft_toupper(c));
	printf("toupper:    '%c' becomes '%c'\n", c, toupper(c));
	printf("\n");
}

static void	test_ft_toupper(void)
{
	printf("\n---------------------TESTING FT_TOUPPER---------------------\n\n");

	compare_toupper('m');
	compare_toupper('z');
	compare_toupper('L');
	compare_toupper('9');
	compare_toupper('!');
}

static void	compare_strlcat(char *src, char *dest1, char *dest2, int size)
{
	printf("Testing with src='%s' dest='%s' size=%d\n", src, dest1, size);
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
	printf("Testing with src='%s' dest='%s' size=%d\n", src, dest1, size);
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
	tested_print_int_array(src, size);
	printf("} dest array={");
	tested_print_int_array(dest1, size);
	printf("} n=%d\n", n);

	printf("ft_memmove: ");
	ft_memmove(dest1, src, sizeof(int) * n);
	tested_print_int_array(dest1, size);
	printf("\n");

	printf("memmove:    ");
	memmove(dest2, src, sizeof(int) * n);
	tested_print_int_array(dest2, size);
	printf("\n\n");
}

static void	compare_memmove_string(char *src, char *dest1, char *dest2, int n)
{
	printf("Testing with src='%s' dest='%s' n=%d\n", src, dest1, n);
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
	tested_print_int_array(src, size);
	printf("} dest array={");
	tested_print_int_array(dest1, size);
	printf("} n=%d\n", n);

	printf("ft_memcpy: ");
	ft_memcpy(dest1, src, sizeof(int) * n);
	tested_print_int_array(dest1, size);
	printf("\n");

	printf("memcpy:    ");
	memcpy(dest2, src, sizeof(int) * n);
	tested_print_int_array(dest2, size);
	printf("\n\n");
}

static void	compare_memcpy_string(char *src, char *dest1, char *dest2, int n)
{
	printf("Testing with src='%s' dest='%s' n=%d\n", src, dest1, n);
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
	tested_print_int_array(arr1, size);
	printf("} n=%d\n", n);

	printf("ft_bzero: ");
	ft_bzero(arr1, sizeof(int) * n);
	tested_print_int_array(arr1, size);
	printf("\n");

	printf("bzero:    ");
	bzero(arr2, sizeof(int) * n);
	tested_print_int_array(arr2, size);
	printf("\n\n");
}

static void	compare_bzero_string(char *s1, char *s2, int n)
{
	printf("Testing with s='%s' n=%d\n", s1, n);
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
	tested_print_int_array(arr1, size);
	printf("} c=%d n=%d\n", c, n);

	printf("ft_memset: ");
	ft_memset(arr1, c, sizeof(int) * n);
	tested_print_int_array(arr1, size);
	printf("\n");

	printf("memset:    ");
	memset(arr2, c, sizeof(int) * n);
	tested_print_int_array(arr2, size);
	printf("\n\n");
}

static void	compare_memset_string(char *s1, char *s2, char c, int n)
{
	printf("Testing with s='%s' c='%c' n=%d\n", s1, c, n);
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
	printf("\n");
}

static void	test_ft_strlen(void)
{
	printf("\n---------------------TESTING FT_STRLEN----------------------\n\n");
	compare_strlen("hello world");
	compare_strlen("hello      wor l   d   ");
	compare_strlen(" ");
	compare_strlen("");
	//compare_strlen(NULL); //segfault - expected behaviour
}

static void	compare_isprint(int c)
{
	printf("ft_isprint: ");
	if(ft_isprint(c))
		printf("'%c' is printable\n", c);
	else
		printf("not printable\n");

	printf("isprint:    ");
	if(isprint(c))
		printf("'%c' is printable\n", c);
	else
		printf("not printable\n");
	printf("\n");
}

static void	test_ft_isprint(void)
{
	printf("\n--------------------TESTING FT_ISPRINT----------------------\n\n");
	compare_isprint('A');
	compare_isprint('7');
	compare_isprint('!');
	compare_isprint('\n');
	compare_isprint(127);
}

static void	compare_isascii(int c)
{
	printf("ft_isascii: ");
	if (ft_isascii(c))
		printf("'%c' is ascii\n", c);
	else
		printf("not ascii\n");

	printf("isascii:    ");
	if (isascii(c))
		printf("'%c' is ascii\n", c);
	else
		printf("not ascii\n");
	printf("\n");
}

static void	test_ft_isascii(void)
{
	printf("\n--------------------TESTING FT_ISASCII----------------------\n\n");
	compare_isascii('f');
	compare_isascii('7');
	compare_isascii('*');
	compare_isascii(200);
	compare_isascii(-13);
}

static void	compare_isalnum(char c)
{
	printf("ft_isalnum: ");
	if (ft_isalnum(c))
		printf("'%c' is alphanumeric\n", c);
	else
		printf("'%c' is not alphanumeric\n", c);

	printf("isalnum:    ");
	if (isalnum(c))
		printf("'%c' is alphanumeric\n", c);
	else
		printf("'%c' is not alphanumeric\n", c);
	printf("\n");
}

static void	test_ft_isalnum(void)
{
	printf("\n--------------------TESTING FT_ISALNUM----------------------\n\n");
	compare_isalnum('A');
	compare_isalnum('p');
	compare_isalnum('4');
	compare_isalnum('!');
	compare_isalnum('*');
}

static void	compare_isdigit(char c)
{
	printf("ft_isdigit: ");
	if (isdigit(c))
		printf("'%c' is numeric\n", c);
	else
		printf("'%c' is not numeric\n", c);

	printf("isdigit:    ");
	if (isdigit(c))
		printf("'%c' is numeric\n", c);
	else
		printf("'%c' is not numeric\n", c);
	printf("\n");
}

static void	test_ft_isdigit(void)
{
	printf("\n--------------------TESTING FT_ISDIGIT---------------------\n\n");
	compare_isdigit('0');
	compare_isdigit('9');
	compare_isdigit('4');
	compare_isdigit('m');
	compare_isdigit('!');
}

static void	compare_isalpha(char c)
{
	printf("ft_isalpha: ");
	if (ft_isalpha(c))
		printf ("'%c' is alphabetic\n", c);
	else
		printf ("'%c' is not alphabetic\n", c);
	printf("isalpha:    ");
	if (isalpha(c))
		printf ("'%c' is alphabetic\n", c);
	else
		printf ("'%c' is not alphabetic\n", c);
	printf("\n");
}

static void	test_ft_isalpha(void)
{
	printf("\n--------------------TESTING FT_ISALPHA----------------------\n\n");
	compare_isalpha('A');
	compare_isalpha('z');
	compare_isalpha('m');
	compare_isalpha('4');
	compare_isalpha('!');
}

static void	test_additional_functions(void)
{
	printf("\n----------------PART 2: ADDITIONAL FUNCTIONS----------------\n");

	char *input;

	test_ft_substr();
	input = readline("Press enter to continue. ");

	test_ft_strjoin();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_strtrim();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_split();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_itoa();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_strmapi();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_striteri();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_putchar_fd();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_putstr_fd();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_putendl_fd();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_putnbr_fd();
	free(input);
}

static void	test_libc_functions(void)
{
	printf("-------------------PART 1: LIBC FUNCTIONS-------------------\n");

	char *input;

	test_ft_isalpha();
	input = readline("Press enter to continue. ");

	test_ft_isdigit();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_isalnum();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_isascii();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_isprint();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_strlen();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_memset();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_bzero();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_memcpy();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_memmove();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_strlcpy();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_strlcat();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_toupper();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_tolower();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_strchr();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_strrchr();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_strncmp();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_memchr();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_memcmp();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_strnstr();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_atoi();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_calloc();
	free(input);
	input = readline("Press enter to continue. ");

	test_ft_strdup();
	free(input);
	input = readline("Press enter to continue. ");
	free(input);
}

int	main(void)
{
	struct termios old;
	struct termios new;
	set_terminal(&old, &new);

	printf("\n----------------TESTING MANDATORY FUNCTIONS-----------------\n\n");

	test_libc_functions();
	test_additional_functions();

	char input[20];
	write(1, "Want to test bonus functions? Press enter to continue or 'q' to quit. ", 70);
	if (read(0, input, 1) > 0 && *input == '\n')
	{
		reset_terminal(&old);
		int ret = system("make test_bonus");
    	if (ret != 0)
        	perror("make failed");
	}
	reset_terminal(&old);
	write(1, "\n", 1);
	return (0);
}
