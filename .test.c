/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .test.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkulpa <emkulpa@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:29:39 by emkulpa           #+#    #+#             */
/*   Updated: 2025/10/24 19:16:34 by emkulpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <bsd/string.h>
#include <stdlib.h>
#include ".for_each_tests.h"

// test macros
#define TO_STR(x) #x
#define CMP_FLAT(x, y) ((x != 0) && (y != 0)) || ((x == 0) && (y == 0)) ? 1 : 0
#define assert(x) assert_with_message(x, #x)
#define assert_expressions(exp1, exp2, cmpf) cmp_with_msg(exp1, exp2, TO_STR(exp1), TO_STR(_##exp2), cmpf)
#define announce(x, ident) printf(YELLOW "\n" ident "%s" DEFAULT, #x); x
#define header_message(x) printf(PINK "\n\n[%s]" DEFAULT, x)
#define memprint(start, n) announce(_memprint(start, n), " ")
#define _memprint(start, n) memprint_indent(start, " ", n)
#define memprint_char(start, n) announce(_memprint_char(start, n), " ")
#define _memprint_char(start, n) memprint_char_indent(start, " ", n)

#define TEST(wrap, func, ...) \
header_message(TO_STR(ft_##func)); \
FOR_EACH(assert_ctypeismore, func, __VA_ARGS__);

#define TEST_MULTI(wrap, func, ...) \
header_message(TO_STR(ft_##func)); \
FOR_EACH_MULTI(assert_ctypeismore, func, __VA_ARGS__);

#define TEST_CMP(assertf, func1, func2, cmpf, ...) \
header_message(TO_STR(func1)); \
FOR_EACH_ASSERT(assertf, func1, func2, cmpf, __VA_ARGS__);

#define TEST_CMP_MULTI(assertf, func1, func2, cmpf, ...) \
header_message(TO_STR(func1)); \
FOR_EACH_ASSERT_MULTI(assertf, func1, func2, cmpf, __VA_ARGS__);

#define TEST_MEM(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, ...) \
header_message(TO_STR(func1)); \
FOR_EACH_ASSERT_MEM_MULTI(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, __VA_ARGS__);
// multi, test -> ctype
// is -> assert ctypeismore

int	cmp_flat(size_t arg1, size_t arg2) { return CMP_FLAT(arg1, arg2); }
int cmp(size_t x, size_t y) { return x == y; }
void	assert_with_message(int expression, const char *message)
{
	printf("\n");
	if (expression)
		printf(GREEN " [OK]");
	else
		printf(RED BG_YELLOW " [KO]" BG_RED);
	printf(YELLOW "  %s" DEFAULT, message);
}
void	cmp_with_msg(size_t	exp1, size_t exp2,  
	const char *exp1_msg,  
	const char *exp2_msg, int (*cmp)(size_t, size_t))
{
	printf("\n");
	if (cmp(exp1, exp2))
		printf(GREEN " [OK]");
	else
		printf(RED BG_YELLOW " [KO]" BG_RED);
	printf(YELLOW "  %s == %s" DEFAULT, exp1_msg, exp2_msg);
	if (!cmp(exp1, exp2))
		printf("\n" YELLOW BG_RED "         %s = %d" DEFAULT "\n" YELLOW BG_RED "         %s = %d" DEFAULT, exp1_msg, (int) exp1, exp2_msg, (int) exp2);
}

void	memprint_indent(void *start, const char* indent, t_size n)
{
	t_size	i;

	i = 0;
	while (i < n)
	{
		if (i % 16 == 0)
			printf(DEFAULT "\n" "%s", indent);
		printf(" %02x", *((char *)(start+i)));
		i++;
	}
	printf(DEFAULT);
}

void	memprint_char_indent(void *start, const char* indent, t_size n)
{
	t_size	i;

	i = 0;
	while (i < n)
	{
		if (i % 16 == 0)
			printf(DEFAULT "\n" "%s", indent);
		printf(" %c", *((char *)(start+i)));
		i++;
	}
	printf(DEFAULT);
}


void	cmp_mem_with_msg(void *m1, void *m2, size_t nbytes, const char *exp1_msg,  
	const char *exp2_msg)
{
	char *indent = YELLOW BG_RED "		";
	printf("\n");
	if (memcmp(m1, m2, nbytes) == 0)
		printf(GREEN " [OK]");
	else
		printf(RED BG_YELLOW " [KO]" BG_RED);
	printf(YELLOW "  %s == %s" DEFAULT, exp1_msg, exp2_msg);
	if (memcmp(m1, m2, nbytes) != 0)
	{
		printf("\n" YELLOW BG_RED "         %s :" DEFAULT, exp1_msg);
		memprint_char_indent(m1, indent, nbytes);
		printf("\n" YELLOW BG_RED "         %s :" DEFAULT, exp2_msg);
		memprint_char_indent(m2, indent, nbytes);
	}
}

int	false_func(int x) { return (x++,0); }


void	test_ft_isalpha(void)
{
	TEST_CMP(assert_expressions, ft_isalpha, isalpha, cmp_flat, 
		'b', '\123', 'A', 'Z', 'z', '\n', '\t', '9', 'j');
}

void	test_ft_isdigit(void)
{
	TEST_CMP(assert_expressions, ft_isdigit, isdigit, cmp_flat, 
		'a', 'b', 'c', '9', '0', '\n', '2', '-', 97);
}

void	test_ft_isalnum(void)
{
	TEST_CMP(assert_expressions, ft_isalnum, isalnum, cmp_flat, 
		'b', '\123', 'A', 'Z', 'z', '\n', '\t', '9', '\t');
}

void	test_ft_isascii(void)
{
	TEST_CMP(assert_expressions, ft_isascii, isascii, cmp_flat, 
		-1, 128, 'A', 'Z', 'z', '\n', '\t', '9', '\t');
}

void	test_ft_isprint(void)
{
	TEST_CMP(assert_expressions, ft_isprint, isprint, cmp_flat, 
		-1, 127, ' ', 'Z', 'z', '\n', '\t', '9', 31);
}

void	test_ft_strlen(void)
{
	TEST_CMP(assert_expressions, ft_strlen, strlen, cmp, 
		"25", "", "12345", "abc", 
		"123\0\t1234", 
		"abcdrewffsasfafadsdsaf", 
		"adfsdfasdfasdfas", "ads", "ads");
}
#define mem_testv(func, m1, m2, nbytes, ...) \
printf("\n--------------------------------------------"); \
	memprint(m1, nbytes); memprint(m2, nbytes); \
	mem_test(func, m1, m2, nbytes, __VA_ARGS__); \
	printf("\n"); memprint(m1, nbytes); memprint(m2, nbytes); 
#define mem_test(func, m1, m2, n, ...) printf("\n"); announce(func(m1, __VA_ARGS__), " "); \
	announce(ft_##func(m2, __VA_ARGS__), " "); assert(memcmp(m1, m2, n) == 0);
#define strlcpy_test_verbose(func, m1, m2, n, ...) printf("\n--------------------------------------------"); \
	memprint(m1, n); memprint(m2, n); \
	strlcpy_test(func, m1, m2, n, __VA_ARGS__); \
	printf("\n"); memprint(m1, n); memprint(m2, n); 
#define strlcpy_test(func, m1, m2, n, ...) printf("\n"); \
	assert(ft_##func(m2, __VA_ARGS__) == func(m1, __VA_ARGS__)); assert(memcmp(m1, m2, n) == 0);

#define mem_testv(func, m1, m2, nbytes, ...) \
printf("\n--------------------------------------------"); \
	memprint(m1, nbytes); memprint(m2, nbytes); \
	mem_test(func, m1, m2, nbytes, __VA_ARGS__); \
	printf("\n"); memprint(m1, nbytes); memprint(m2, nbytes); 
#define mem_test_case(d1, d2, ...) (d1, __VA_ARGS__), (d2, __VA_ARGS__)
#define dummy_assert(exp1, exp2, cmpf) exp1; exp2;

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
	mem_testv(memset, m1, m2, 5, 8, 1);
	mem_testv(memset, m3, m4, 9, 1, 3);
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
	TEST_MEM(dummy_assert, ft_bzero, bzero, cmp, cmp_mem_with_msg, 1, (2, 1, 4, 9, 5), 
		mem_test_case(m1, m2, 1),
		mem_test_case(m3, m4, 3),
		mem_test_case(m5, m6, 2),
		mem_test_case(m7, m8, 1),
		mem_test_case(m9, m10, 1)
	);
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
	// char *m13 = (void *)0;
	// char *m14 = (void *)0;
	// char *m15 = (void *)0;

	TEST_MEM(dummy_assert, ft_memcpy, memcpy, cmp, cmp_mem_with_msg, 1, (11, 2, 1, 4, 9, 5), 
		mem_test_case(m1, m2, tempo, 3),
		mem_test_case(m3, m4, tempo, 5),
		mem_test_case(m5, m6, tempo, 2),
		mem_test_case(m7, m8, tempo, 1),
		mem_test_case(m9, m10, tempo, 2),
		(m11, tempo, 4), (m12, tempo2, 4)
	);
}

void	test_ft_memmove(void)
{
	char src1[12] = "hello world";
	char src2[12] = "hello world";
	char dest1[5] = "1234";
	char dest2[5] = "1234";
	char dest3[9] = "12345678";
	char dest4[9] = "12345678";
	char dest5[4] = "\0\0\0";
	char dest6[4] = "\0\0\0";
	char dest7[1] = "";
	char dest8[1] = "";
	char dest9[2] = "1";
	char dest10[2] = "1";
	char *dest11;
	char *dest12;
	char *src3;
	char *src4;

	dest11 = src1 + 1;
	dest12 = src2 + 1;
	src3 = src1 + 5;
	src4 = src2 + 5;

	TEST_MEM(dummy_assert, ft_memmove, memmove, cmp, cmp_mem_with_msg, 1, (12, 5, 9, 4, 1, 2, 11),
		mem_test_case(dest1, dest2, src1, 3),
		mem_test_case(dest3, dest4, src1, 5),
		mem_test_case(dest6, dest5, src1, 2),
		mem_test_case(dest7, dest8, src1, 1),
		mem_test_case(dest9, dest10, src1, 2),
		(dest11, src3, 6), (dest12, src4, 6)
	);
}

void	test_ft_strlcpy(void)
{
	char s1[12] = "hello world";
	//char tempo2[12] = "hello world";
	char d1[5] = "\0abc";
	char d2[5] = "\0abc";
	char d3[9] = "12345678";
	char d4[9] = "12345678";
	char d5[16] = "123456789abcde";
	char d6[16] = "123456789abcde";
	// char m7[1] = "";
	// char m8[1] = "";
	// char m9[2] = "1";
	// char m10[2] = "1";
	TEST_MEM(assert_expressions, 
		ft_strlcpy, strlcpy, cmp, 
		cmp_mem_with_msg, 1, (5, 9, 16, 1, 2), 
		(d2, s1, 4), (d1, s1, 4),
		(d4, s1, 4), (d3, s1, 4),
		(d6, s1, 0), (d5, s1, 0)
	);
	// header_message("ft_strlcpy");
	// memprint(s1, 12);
	
	// memprint(d1, 5);
	// memprint(d2, 5);
	// printf("\n"); 
	// assert(ft_strlcpy(d2, s1, 4) == strlcpy(d1, s1, 4)); 
	// assert(memcmp(d1, d2, 5) == 0);
	// printf("\n"); 
	// memprint(d1, 5); 
	// memprint(d2, 5);

	// printf("\n--------------------------------------------");
	// memprint(d3, 9);
	// memprint(d4, 9);
	// printf("\n"); 
	// assert(ft_strlcpy(d4, s1, 4) == strlcpy(d3, s1, 4)); 
	// assert(memcmp(d3, d4, 9) == 0);
	// printf("\n"); 
	// memprint(d3, 9); 
	// memprint(d4, 9);
	
	// printf("\n--------------------------------------------");
	// memprint(d5, 5);
	// memprint(d6, 5);
	// printf("\n"); 
	// assert(ft_strlcpy(d6, s1, 0) == strlcpy(d5, s1, 0)); 
	// assert(memcmp(d5, d6, 5) == 0);
	// printf("\n"); 
	// memprint(d5, 5); 
	// memprint(d6, 5);
}

void	test_ft_strlcat(void)
{

}

void	test_ft_toupper(void)
{
	TEST_CMP(assert_expressions, ft_toupper, toupper, cmp, 'a', 'b', 'z', 'A', 'Z', ' ')
}

void	test_ft_tolower(void)
{
	TEST_CMP(assert_expressions, ft_tolower, tolower, cmp, 'a', 'b', 'z', 'A', 'Z', ' ')
}

void	test_ft_strchr(void)
{

}

void	test_ft_strrchr(void)
{

}

void	test_ft_strncmp(void)
{
	TEST_CMP_MULTI(assert_expressions, ft_strncmp, strncmp, cmp, 
		("abc", "abcd", 3), ("", "abc", 4));	
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
