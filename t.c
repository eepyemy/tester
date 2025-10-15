#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <bsd/string.h>

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

// test macros
#define assert(x) assert_with_message(x, #x)
#define TO_STR(x) #x
#define CMP_FLAT(x, y) ((x != 0) && (y != 0)) || ((x == 0) && (y == 0)) ? 1 : 0
#define assert_ctypeis(x) assert_with_message(CMP_FLAT(x, ft_##x), TO_STR(ft_##x == _##x))
#define assert_ctypeismore(x) assert_cmp_with_message(ft_##x, x, TO_STR(ft_##x), TO_STR(_##x), cmp_flat)
#define assert_ctype(x) assert_cmp_with_message(ft_##x, x, TO_STR(ft_##x), TO_STR(_##x), cmp)

#define header_message(x) printf(PINK "\n\n[%s]" DEFAULT, x)


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

#define test_is(func, n, ...) \
header_message(TO_STR(ft_##func)); \
FOR_EACH_##n(assert_ctypeismore, func, __VA_ARGS__);


#define test(func, n, ...) \
header_message(TO_STR(ft_##func)); \
FOR_EACH_##n(assert_ctype, func, __VA_ARGS__);

int	cmp_flat(int arg1, int arg2)
{
	return CMP_FLAT(arg1, arg2);
}
int cmp(int x, int y)
{
	return x == y;
}
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
int	main(void)
{
	test_is(isalpha, 9, 'b', '\123', 'A', 'Z', 'z', '\n', '\t', '9', 'j');
	test_is(isdigit, 9, 'a', 'b', 'c', '9', '0', '\n', '2', '-', 97);
	test_is(isalnum, 9, 'b', '\123', 'A', 'Z', 'z', '\n', '\t', '9', '\t');
	test_is(isascii, 9, -1, 128, 'A', 'Z', 'z', '\n', '\t', '9', '\t');
	test_is(isprint, 9, -1, 128, 'A', 'Z', 'z', '\n', '\t', '9', 31);
	test(strlen, 9, "25", "", "12345", "abc", 
		"123\0\t1234", 
		"abcdrewffsasfafadsdsaf", 
		"adfsdfasdfasdfas", "ads", "ads");
	
}

