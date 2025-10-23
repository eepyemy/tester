/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .test.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkulpa <emkulpa@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:29:39 by emkulpa           #+#    #+#             */
/*   Updated: 2025/10/15 18:04:36 by emkulpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <bsd/string.h>
#include <stdlib.h>

//from mini moulinette terminal color codes
#define GREEN "\033[38;5;84m"
#define LORANGE "\033[38;5;216m"
#define LGREEN "\033[38;5;115m"
#define LPINK "\033[38;5;225m"
#define YELLOW "\033[38;5;220m"
#define RED "\033[38;5;196m"
#define BLUE "\033[38;5;45m"
#define PURPLE "\033[38;5;63m"
#define PINK "\033[38;5;207m"
#define BLACK "\033[38;5;0m"
#define BG_GREEN "\033[48;5;82m"
#define BG_RED "\033[48;5;197m"
#define BG_YELLOW "\033[48;5;220m"
#define BG_PINK "\033[48;5;207m"
#define GREY "\033[38;5;8m"
#define BOLD "\033[1m"
#define DEFAULT "\033[0m"
#define CHECKMARK "\xE2\x9C\x93"

#define FOR_EACH_0(up, down)
#define FOR_EACH_1(up, down, x) up(down(x)); 
#define FOR_EACH_2(up, down, x, ...) up(down(x));FOR_EACH_1(up, down, __VA_ARGS__)
#define FOR_EACH_3(up, down, x, ...) up(down(x));FOR_EACH_2(up, down, __VA_ARGS__)
#define FOR_EACH_4(up, down, x, ...) up(down(x));FOR_EACH_3(up, down, __VA_ARGS__)
#define FOR_EACH_5(up, down, x, ...) up(down(x));FOR_EACH_4(up, down, __VA_ARGS__)
#define FOR_EACH_6(up, down, x, ...) up(down(x));FOR_EACH_5(up, down, __VA_ARGS__)
#define FOR_EACH_7(up, down, x, ...) up(down(x));FOR_EACH_6(up, down, __VA_ARGS__)
#define FOR_EACH_8(up, down, x, ...) up(down(x));FOR_EACH_7(up, down, __VA_ARGS__)
#define FOR_EACH_9(up, down, x, ...) up(down(x));FOR_EACH_8(up, down, __VA_ARGS__)

// test macros
#define TO_STR(x) #x
#define CMP_FLAT(x, y) ((x != 0) && (y != 0)) || ((x == 0) && (y == 0)) ? 1 : 0
#define assert(x) assert_with_message(x, #x)
#define assert_ctypeis(x) assert_with_message(CMP_FLAT(x, ft_##x), TO_STR(ft_##x == _##x))
#define assert_ctypeismore(x) assert_cmp_with_message(ft_##x, x, TO_STR(ft_##x), TO_STR(_##x), cmp_flat)
#define assert_ctype(x) assert_cmp_with_message(ft_##x, x, TO_STR(ft_##x), TO_STR(_##x), cmp)
#define assert_mem(x)
#define announce(x, ident) printf(YELLOW "\n" ident "%s" DEFAULT, #x); x
#define header_message(x) printf(PINK "\n\n[%s]" DEFAULT, x)
#define memprint(start, n) announce(_memprint(start, n), " ")
#define _memprint(start, n) memprint_indent(start, " ", n)
#define test_is(func, n, ...) \
header_message(TO_STR(ft_##func)); \
FOR_EACH_##n(assert_ctypeismore, func, __VA_ARGS__);

#define test(func, n, ...) \
header_message(TO_STR(ft_##func)); \
FOR_EACH_##n(assert_ctype, func, __VA_ARGS__);

int	cmp_flat(int arg1, int arg2) { return CMP_FLAT(arg1, arg2); }
int cmp(int x, int y) { return x == y; }
void	assert_with_message(int expression, const char *message)
{
	printf("\n");
	if (expression)
		printf(GREEN " [OK]");
	else
		printf(RED BG_YELLOW " [KO]" BG_RED);
	printf(YELLOW "  %s" DEFAULT, message);
}
void	assert_cmp_with_message(int	arg1, int arg2,  
	const char *arg1_msg,  
	const char *arg2_msg, int (*cmp)(int, int))
{
	printf("\n");
	if (cmp(arg1, arg2))
		printf(GREEN " [OK]");
	else
		printf(RED BG_YELLOW " [KO]" BG_RED);
	printf(YELLOW "  %s == %s" DEFAULT, arg1_msg, arg2_msg);
	if (!cmp(arg1, arg2))
		printf("\n" YELLOW BG_RED "         %s = %d" DEFAULT "\n" YELLOW BG_RED "         %s = %d" DEFAULT, arg1_msg, arg1, arg2_msg, arg2);
}

void	memprint_indent(void *start, const char* indent, t_size n)
{
	t_size	i;

	i = 0;
	while (i < n)
	{
		if (i % 8 == 0)
			printf("\n" "%s", indent);
		printf(" %02x", *((char *)(start+i)));
		i++;
	}
}

void	test_ft_isalpha(void)
{
	test_is(isalpha, 9, 'b', '\123', 'A', 'Z', 'z', '\n', '\t', '9', 'j');
}

void	test_ft_isdigit(void)
{
	test_is(isdigit, 9, 'a', 'b', 'c', '9', '0', '\n', '2', '-', 97);
}

void	test_ft_isalnum(void)
{
	test_is(isalnum, 9, 'b', '\123', 'A', 'Z', 'z', '\n', '\t', '9', '\t');
}

void	test_ft_isascii(void)
{
	test_is(isascii, 9, -1, 128, 'A', 'Z', 'z', '\n', '\t', '9', '\t');
}

void	test_ft_isprint(void)
{
	test_is(isprint, 9, -1, 128, 'A', 'Z', 'z', '\n', '\t', '9', 31);
}

void	test_ft_strlen(void)
{
	test(strlen, 9, "25", "", "12345", "abc", 
		"123\0\t1234", 
		"abcdrewffsasfafadsdsaf", 
		"adfsdfasdfasdfas", "ads", "ads");
}
#define mem_test_verbose(func, m1, m2, n, ...) printf("\n--------------------------------------------"); \
	memprint(m1, n); memprint(m2, n); \
	mem_test(func, m1, m2, n, __VA_ARGS__); \
	printf("\n"); memprint(m1, n); memprint(m2, n); 
#define mem_test(func, m1, m2, n, ...) printf("\n"); announce(func(m1, __VA_ARGS__), " "); \
	announce(ft_##func(m2, __VA_ARGS__), " "); assert(memcmp(m1, m2, n) == 0);

void	test_ft_memset(void)
{
	char m1[5] = "1234";
	char m2[5] = "1234";
	char m3[9] = "12345678";
	char m4[9] = "12345678";
	char m5[4] = "\0\0\0";
	char m6[4] = "\0\0\0";
	char m7[1] = "";
	char m8[1] = "";
	char m9[2] = "1";
	char m10[2] = "1";

	header_message("ft_memset");
	mem_test_verbose(memset, m1, m2, 5, 8, 1);
	mem_test_verbose(memset, m3, m4, 9, 1, 3);
	mem_test(memset, m5, m6, 4, '\n', 2);
	mem_test(memset, m7, m8, 1, 8, 1);
	mem_test(memset, m9, m10, 2, 8, 1);
}

void	test_ft_bzero(void)
{
	char m1[5] = "1234";
	char m2[5] = "1234";
	char m3[9] = "12345678";
	char m4[9] = "12345678";
	char m5[4] = "\0\0\0";
	char m6[4] = "\0\0\0";
	char m7[1] = "";
	char m8[1] = "";
	char m9[2] = "1";
	char m10[2] = "1";

	header_message("ft_bzero");
	mem_test_verbose(bzero, m1, m2, 5, 1);
	mem_test_verbose(bzero, m3, m4, 9, 3);
	mem_test(bzero, m5, m6, 4, 2);
	mem_test(bzero, m7, m8, 1, 1);
	mem_test(bzero, m9, m10, 2, 1);
}

void	test_ft_memcpy(void)
{
	char tempo[12] = "hello world";
	char tempo2[12] = "hello world";
	char m1[5] = "1234";
	char m2[5] = "1234";
	char m3[9] = "12345678";
	char m4[9] = "12345678";
	char m5[4] = "\0\0\0";
	char m6[4] = "\0\0\0";
	char m7[1] = "";
	char m8[1] = "";
	char m9[2] = "1";
	char m10[2] = "1";
	char *m11;
	char *m12;
	m11 = tempo + 1;
	m12 = tempo2 + 1;
	header_message("ft_memcpy");
	mem_test_verbose(memcpy, m1, m2, 5, tempo, 3);
	mem_test_verbose(memcpy, m3, m4, 9, tempo, 5);
	mem_test(memcpy, m5, m6, 4, tempo, 2);
	mem_test(memcpy, m7, m8, 1, tempo, 1);
	mem_test(memcpy, m9, m10, 2, tempo, 2);
	
	// overlap
	memprint(m11, 4);
	memprint(m12, 4);
	memprint(tempo, 11);
	memprint(tempo2, 11);
	announce(memcpy(m11, tempo, 4), " ");
	announce(ft_memcpy(m12, tempo2, 4), " ");
	memprint(m11, 4);
	memprint(m12, 4);
	memprint(tempo, 11);
	memprint(tempo2, 11);
	assert(memcmp(m11, m12, 4) == 0);
}

void	test_ft_memmove(void)
{
	char tempo[12] = "hello world";
	char tempo2[12] = "hello world";
	char m1[5] = "1234";
	char m2[5] = "1234";
	char m3[9] = "12345678";
	char m4[9] = "12345678";
	char m5[4] = "\0\0\0";
	char m6[4] = "\0\0\0";
	char m7[1] = "";
	char m8[1] = "";
	char m9[2] = "1";
	char m10[2] = "1";
	char *m11;
	char *m12;
	m11 = tempo + 1;
	m12 = tempo2 + 1;
	header_message("ft_memmove");
	mem_test_verbose(memmove, m1, m2, 5, tempo, 3);
	mem_test_verbose(memmove, m3, m4, 9, tempo, 5);
	mem_test(memmove, m5, m6, 4, tempo, 2);
	mem_test(memmove, m7, m8, 1, tempo, 1);
	mem_test(memmove, m9, m10, 2, tempo, 2);

	// overlap
	memprint(m11, 4);
	memprint(m12, 4);
	memprint(tempo, 11);
	memprint(tempo2, 11);
	announce(memmove(m11, tempo, 4), " ");
	announce(ft_memmove(m12, tempo2, 4), " ");
	memprint(m11, 4);
	memprint(m12, 4);
	memprint(tempo, 11);
	memprint(tempo2, 11);
	assert(memcmp(m11, m12, 4) == 0);
}

void	test_ft_strlcpy(void)
{
	char tempo[12] = "hello world";
	//char tempo2[12] = "hello world";
	char m1[5] = "\0abc";
	char m2[5] = "\0abc";
	char m3[9] = "12345678";
	char m4[9] = "12345678";
	char m5[16] = "123456789abcde";
	char m6[16] = "123456789abcde";
	// char m7[1] = "";
	// char m8[1] = "";
	// char m9[2] = "1";
	// char m10[2] = "1";
	header_message("ft_strlcpy");
	memprint(tempo, 12);
	mem_test_verbose(strlcpy, m1, m2, 8, tempo, 8)
	mem_test_verbose(strlcpy, m3, m4, 16, tempo, 9)
	mem_test_verbose(strlcpy, m5, m6, 16, tempo, 16)
}

void	test_ft_strlcat(void)
{

}

void	test_ft_toupper(void)
{

}

void	test_ft_tolower(void)
{

}

void	test_ft_strchr(void)
{

}

void	test_ft_strrchr(void)
{

}

void	test_ft_strncmp(void)
{

}

void	test_ft_memchr(void)
{

}

void	test_ft_memcmp(void)
{

}

void	test_ft_strnstr(void)
{

}

void	test_ft_atoi(void)
{

}

void	test_all(void)
{
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
test_ft_memcmp();
test_ft_strnstr();
test_ft_atoi();
}

void	test_func(const char* func_name)
{
if(!strcmp(func_name, "ft_isalpha")) test_ft_isalpha();
if(!strcmp(func_name, "ft_isdigit")) test_ft_isdigit();
if(!strcmp(func_name, "ft_isalnum")) test_ft_isalnum();
if(!strcmp(func_name, "ft_isascii")) test_ft_isascii();
if(!strcmp(func_name, "ft_isprint")) test_ft_isprint();
if(!strcmp(func_name, "ft_strlen")) test_ft_strlen();
if(!strcmp(func_name, "ft_memset")) test_ft_memset();
if(!strcmp(func_name, "ft_bzero")) test_ft_bzero();
if(!strcmp(func_name, "ft_memcpy")) test_ft_memcpy();
if(!strcmp(func_name, "ft_memmove")) test_ft_memmove();
if(!strcmp(func_name, "ft_strlcpy")) test_ft_strlcpy();
if(!strcmp(func_name, "ft_strlcat")) test_ft_strlcat();
if(!strcmp(func_name, "ft_toupper")) test_ft_toupper();
if(!strcmp(func_name, "ft_tolower")) test_ft_tolower();
if(!strcmp(func_name, "ft_strchr")) test_ft_strchr();
if(!strcmp(func_name, "ft_strrchr")) test_ft_strrchr();
if(!strcmp(func_name, "ft_strncmp")) test_ft_strncmp();
if(!strcmp(func_name, "ft_memchr")) test_ft_memchr();
if(!strcmp(func_name, "ft_memcmp")) test_ft_memcmp();
if(!strcmp(func_name, "ft_strnstr")) test_ft_strnstr();
if(!strcmp(func_name, "ft_atoi")) test_ft_atoi();
}

int	main(int argc, char *argv[])
{
	int		i;

	i = 1;
	while(i <= argc - 1)
	{

		test_func(argv[i]);
		i++;
	}
	if(argc == 1)
		test_all();
	printf("\n");
	return (0);
}
