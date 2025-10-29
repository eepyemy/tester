/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .test.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkulpa <emkulpa@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:29:39 by emkulpa           #+#    #+#             */
/*   Updated: 2025/10/29 17:25:50 by emkulpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <bsd/string.h>
#include <stdlib.h>
#include ".for_each_tests.h"

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
#define BG_DARK_RED "\033[48;5;88m"
#define WHITE "\033[38;5;15m"

// test macros
#define TO_STR(x) #x
#define CMP_FLAT(x, y) (((x != 0) && (y != 0)) || ((x == 0) && (y == 0)) )? 1 : 0
#define CMP_FLAT_SIGNED(x, y) (((x > 0) && (y > 0)) || ((x == 0) && (y == 0)) || ((x < 0) && (y < 0)) ) ? 1 : 0
#define assert(x) assert_with_message(x, #x)
#define assert_expressions(exp1, exp2, cmpf) cmp_with_msg(exp1, exp2, TO_STR(exp1), TO_STR(_##exp2), cmpf)
#define assert_expressions_int(exp1, exp2, cmpf) cmp_with_msg_int(exp1, exp2, TO_STR(exp1), TO_STR(_##exp2), cmpf)
#define announce(x, ident) if (!SHORT) printf(YELLOW "\n" ident "%s" DEFAULT, #x); x
#define header_message(x) printf(PINK "\n\n[%s]" DEFAULT, x)

#define TESTS(print_func, func1, func2, poly_cmp, ...) \
header_message(TO_STR(func1)); \
FOR_EACH(print_func, func1, func2, poly_cmp, __VA_ARGS__);

#define TESTS_MULTI(print_func, func1, func2, poly_cmp, ...) \
header_message(TO_STR(func1)); \
FOR_EACH_MULTI(print_func, func1, func2, poly_cmp, __VA_ARGS__);

#define TESTS_CMP(result_assert, func1, func2, result_cmp, ...) \
header_message(TO_STR(func1)); \
FOR_EACH_ASSERT(result_assert, func1, func2, result_cmp, __VA_ARGS__);

#define TESTS_CMP_MULTI(result_assert, func1, func2, result_cmp, ...) \
header_message(TO_STR(func1)); \
FOR_EACH_ASSERT_MULTI(result_assert, func1, func2, result_cmp, __VA_ARGS__);

#define TESTS_MEM(result_assert, func1, func2, result_cmp, memassert, narg_pointer, ...) \
header_message(TO_STR(func1)); \
FOR_EACH_ASSERT_MEM_MULTI(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__);
// multi, test -> ctype
// is -> assert ctypeismore

#include ".config.h"
#include <unistd.h>

int	cmp_flat(size_t arg1, size_t arg2) { return CMP_FLAT(arg1, arg2); }
int cmp_flat_signed(int arg1, int arg2) { return CMP_FLAT_SIGNED(arg1, arg2); }
int cmp(size_t x, size_t y) { return x == y; }

int	assert_with_message(int expression, const char *message)
{
	fflush(stdout);
	usleep(SLEEP_TIME);
	if (!SHORT)
		printf("\n");
	if (expression)
		printf(GREEN " [OK]");
	else
		printf(RED BG_YELLOW " [KO]" BG_DARK_RED);
	if (!SHORT)
		printf(YELLOW "  %s" DEFAULT, message);
	else
		printf(DEFAULT);
	return (expression);
}

void	cmp_with_msg(size_t	exp1, size_t exp2,  
	const char *exp1_msg,  
	const char *exp2_msg, int (*cmp)(size_t , size_t))
{
	fflush(stdout);
	usleep(SLEEP_TIME);
	int _r = cmp(exp1, exp2);
	if (!SHORT)
		printf("\n");
	if (_r)
		printf(GREEN " [OK]");
	else
		printf(RED BG_YELLOW " [KO]" BG_DARK_RED);
	if (!SHORT)
		printf(YELLOW "  %s == %s" DEFAULT, exp1_msg, exp2_msg);
	else
		printf(DEFAULT);
	if (!_r && !SHORT)
		printf("\n" YELLOW BG_DARK_RED "        ╰%s = %d" DEFAULT 
			"\n" YELLOW BG_DARK_RED "        ╰%s = %d" DEFAULT, 
			exp1_msg, (int) exp1, 
			exp2_msg, (int) exp2);
	if (VERBOSE && !SHORT && _r)
		printf("\n" GREEN "        ╰%s = %d" DEFAULT 
			"\n" GREEN "        ╰%s = %d" DEFAULT, 
			exp1_msg, (int) exp1, 
			exp2_msg, (int) exp2);
}

void	cmp_with_msg_int(int exp1, int exp2,  
	const char *exp1_msg,  
	const char *exp2_msg, int (*cmp)(int , int))
{
	fflush(stdout);
	usleep(SLEEP_TIME);
	int _r = cmp(exp1, exp2);
	if (!SHORT)
		printf("\n");
	if (_r)
		printf(GREEN " [OK]");
	else
		printf(RED BG_YELLOW " [KO]" BG_DARK_RED);
	if (!SHORT)
		printf(YELLOW "  %s == %s" DEFAULT, exp1_msg, exp2_msg);
	else
		printf(DEFAULT);
	if (!_r && !SHORT)
		printf("\n" YELLOW BG_DARK_RED "        ╰%s = %d" DEFAULT 
			"\n" YELLOW BG_DARK_RED "        ╰%s = %d" DEFAULT, 
			exp1_msg, (int) exp1, 
			exp2_msg, (int) exp2);
	if (VERBOSE && !SHORT && _r)
		printf("\n" GREEN "        ╰%s = %d" DEFAULT 
			"\n" GREEN "        ╰%s = %d" DEFAULT, 
			exp1_msg, (int) exp1, 
			exp2_msg, (int) exp2);
}


void	memprint_indent(void *start, const char* indent, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (i % 16 == 0)
			printf(DEFAULT "\n" "%s", indent);
		printf(MEM_VIEW_MODE, *((char *)(start+i)));
		i++;
	}
	printf(DEFAULT);
}

void	cmp_mem_with_msg(void *m1, void *m2, size_t nbytes, const char *exp1_msg,  
	const char *exp2_msg)
{
	fflush(stdout);
	usleep(SLEEP_TIME);
	char *indent =  WHITE BG_DARK_RED "		";
	char *info_indent = WHITE "		";
	int _r = 0;
	_r = memcmp(m1, m2, nbytes);
	if (!SHORT)
		printf("\n");
	if (_r == 0)
		printf(GREEN " [OK]");
	else
		printf(RED BG_YELLOW " [KO]" BG_DARK_RED);
	if (!SHORT)
		printf(YELLOW "  [MEM]%s == %s" DEFAULT, exp1_msg, exp2_msg);
	else
		printf(DEFAULT);
	if (_r != 0 && !SHORT)
	{
		printf("\n" YELLOW BG_DARK_RED "        ╰%s :" DEFAULT, exp1_msg);
		memprint_indent(m1, indent, nbytes);
		printf("\n" YELLOW BG_DARK_RED "        ╰%s :" DEFAULT, exp2_msg);
		memprint_indent(m2, indent, nbytes);
	}
	if (_r == 0 && VERBOSE && !SHORT)
	{
		printf("\n" GREEN "        ╰%s :" DEFAULT, exp1_msg);
		memprint_indent(m1, info_indent, nbytes);
		printf("\n" GREEN "        ╰%s :" DEFAULT, exp2_msg);
		memprint_indent(m2, info_indent, nbytes);
	}
}

int	false_func(int x) { return (x++,0); }


void	test_ft_isalpha(void)
{
	TESTS(assert, ft_isalpha, isalpha, EQ_FLAT, 
		'b', '\123', 'A', 'Z', 'z', '\n', '\t', '9', 'j');
}

void	test_ft_isdigit(void)
{
	TESTS(assert, ft_isdigit, isdigit, EQ_FLAT, 
		'a', 'b', 'c', '9', '0', '\n', '2', '-', 97);
}

void	test_ft_isalnum(void)
{
	TESTS(assert, ft_isalnum, isalnum, EQ_FLAT, 
		'b', '\123', 'A', 'Z', 'z', '\n', '\t', '9', '\t');
}

void	test_ft_isascii(void)
{
	TESTS(assert, ft_isascii, isascii, EQ_FLAT, 
		-1, 128, 'A', 'Z', 'z', '\n', '\t', '9', '\t');
}

void	test_ft_isprint(void)
{
	TESTS(assert, ft_isprint, isprint, EQ_FLAT, 
		-1, 127, ' ', 'Z', 'z', '\n', '\t', '9', 31);
}

void	test_ft_strlen(void)
{
	TESTS(assert, ft_strlen, strlen, EQ, 
		"25", "", "12345", "abc", 
		"123\0\t1234", 
		"abcdrewffsasfafadsdsaf", 
		"adfsdfasdfasdfas", "ads", "ads");
}

#define mem_test_case(size, d1, d2, ...) size, (d1, __VA_ARGS__), (d2, __VA_ARGS__)
#define dummy_assert(exp1, exp2, cmpf) announce(exp1, "  "); exp2;

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

	// MEM_ASSERT_MULTI(dummy_assert, ft_memset, memset, cmp, cmp_mem_with_msg, 1, 5, (m1, 8, 1), (m2, 8, 1));
	TESTS_MEM(dummy_assert, ft_memset, memset, cmp, cmp_mem_with_msg, 1,
		mem_test_case(5, m1, m2, 8, 1),
		mem_test_case(9, m3, m4, 1, 3),
		mem_test_case(4, m5, m6, '\n', 2),
		mem_test_case(1, m7, m8, 8, 1),
		mem_test_case(2, m9, m10, 8, 1)
	);
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

	//header_message("ft_bzero");
	TESTS_MEM(dummy_assert, ft_bzero, bzero, cmp, cmp_mem_with_msg, 1, 
		mem_test_case(5, m1, m2, 1),
		mem_test_case(9, m3, m4, 3),
		mem_test_case(4, m5, m6, 2),
		mem_test_case(1, m7, m8, 1),
		mem_test_case(2, m9, m10, 1)
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

	TESTS_MEM(dummy_assert, ft_memcpy, memcpy, cmp, cmp_mem_with_msg, 1, 
		mem_test_case(5, m1, m2, tempo, 3),
		mem_test_case(9, m3, m4, tempo, 5),
		mem_test_case(4, m5, m6, tempo, 2),
		mem_test_case(1, m7, m8, tempo, 1),
		mem_test_case(2, m9, m10, tempo, 2),
		11, (m11, tempo, 4), (m12, tempo2, 4)
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

	TESTS_MEM(dummy_assert, ft_memmove, memmove, cmp, cmp_mem_with_msg, 1,
		mem_test_case(5, dest1, dest2, src1, 3),
		mem_test_case(9, dest3, dest4, src1, 5),
		mem_test_case(4, dest6, dest5, src1, 2),
		mem_test_case(1, dest7, dest8, src1, 1),
		mem_test_case(2, dest9, dest10, src1, 2),
		11, (dest11, src3, 6), (dest12, src4, 6)
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
	TESTS_MEM(POLY_TEST_EXP, 
		ft_strlcpy, strlcpy, cmp, 
		cmp_mem_with_msg, 1, 
		mem_test_case(5, d2, d1, s1, 4),
		mem_test_case(9, d4, d3, s1, 4),
		mem_test_case(16, d6, d5, s1, 0)
	);
}

void	test_ft_strlcat(void)
{
	// char s1[12] = "hello world";
	// char d1[5] = "\0abc";
	// char d2[5] = "\0abc";
	// char d3[9] = "12345678";
	// char d4[9] = "12345678";
	// char d5[16] = "123456789abcde";
	// char d6[16] = "123456789abcde";
	char d7[16] = "abcd\0o123456789";
	char d8[16] = "abcd\0o123456789";
	char d9[16] = "abcd\0o123456789";
	char d10[16] = "abcd\0o123456789";
	char d11[16] = "abcd\0o123456789";
	char d12[16] = "abcd\0o123456789";
	TESTS_MEM(POLY_TEST_EXP, ft_strlcat, strlcat, EQ, cmp_mem_with_msg, 1,
		mem_test_case(16, d7, d8, "PPP", 3),
		mem_test_case(16, d9, d10, "PPP", 5),
		mem_test_case(16, d11, d12, "PPP", 6),
		mem_test_case(16, d11, d12, "", 6)
	);
}

void	test_ft_toupper(void)
{
	TESTS(assert, ft_toupper, toupper, EQ, 
		'a', 'b', 'z', 'A', 'Z', ' ');
}

void	test_ft_tolower(void)
{
	TESTS(assert, ft_tolower, tolower, EQ, 
		'a', 'b', 'z', 'A', 'Z', ' ')
}

void	test_ft_strchr(void)
{
	TESTS_MULTI(assert, ft_strchr, strchr, EQ,
		("abc", 'c'),
		("abcd", 'e'),
		("", '1'),
		("\0\0\0", '\0'),
		("teste", 'e'),
		("teste", '\0')
	);
}

void	test_ft_strrchr(void)
{
	TESTS_MULTI(assert, ft_strrchr, strrchr, EQ,
		("cacbc", 'c'),
		("abcd", 'e'),
		("", '1'),
		("\0\0\0", '\0'),
		("teste", 'e'),
		("teste", '\0')
	);
}

void	test_ft_strncmp(void)
{
	TESTS_MULTI(assert, ft_strncmp, strncmp, EQ, 
		("abc", "abcd", 3), 
		("", "abc", 4),
		("abc", "", 3),
		("abc", "", 0),
		("abc", "a", 1),
		("\0\0\0", "\0\0p", 3),
		("", "", 0),
		("", "", 1),
		("", "", 6)
	);	
}

void	test_ft_memchr(void)
{
	TESTS_MULTI(assert, ft_memchr, memchr, EQ,
		("acbc", 'c', 2),
		("abcd", 'e', 0),
		("", '1', 1),
		("\0\0\0", '\0', 1)
	);
}

void	test_ft_memcmp(void)
{
	int *x;
	int *y;

	x = (int*) malloc(sizeof(int));
	y = (int*) malloc(sizeof(int));
	
	*x = 15;
	*y = 3;
	
	TESTS_MULTI(assert, ft_memcmp, memcmp, EQ_FLAT_SIGNED, 
		("abc", "abe", 2),
		("abc", "abe", 3),
		("", "abd", 1),
		("", "", 1),
		("", "", 0),
		(x, y, 3)
	);
	free(x); free(y);
	
}

void	test_ft_strnstr(void)
{
	TESTS_MULTI(assert, ft_strnstr, strnstr, EQ,
		("abcdefg", "cde", 3),
		("abcdefg", "cde", 4),
		("abcdefg", "cde", 5),
		("abcdefg", "cde", 6),
		("", "cde", 3),
		("ab", "cde", 2),
		("abcde", "dea", 6),
		("", "", 1),
		("a", "", 2),
		("a", "", 0),
		("a", "a", 0),
		("", "", 0),
		("", "", 2),
		("", "", 3),
		("\0abcde", "bc", 5)
	);
	// if (!SHORT && VERBOSE)
	// {
	// 	announce(ft_strnstr("", "", 1), "");
	// 	printf("\nstrnstr: %p", strnstr("", "", 1));
	// 	printf("\nft_strnstr: %p", ft_strnstr("", "", 1));

	// 	announce(ft_strnstr("", "", 0), "");
	// 	printf("\nstrnstr: %p", strnstr("", "", 0));
	// 	printf("\nft_strnstr: %p", ft_strnstr("", "", 0));
	// }
}

void	test_ft_atoi(void)
{
	TESTS(assert, ft_atoi, atoi, EQ, 
		"abc", "000001234", "12345", "-123", 
		"2147483647asd", "     -2147483648", "",
		"d1234", "\v\f\t \n \t \r\r\r -42", 
		"a", "0", "-0", "+23", "++42", "--42", "00000000000",
		"-+12323"
	);
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
