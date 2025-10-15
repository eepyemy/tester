#include "constants.h"
#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <ctype.h>

#define PINK "\033[38;5;207m"
#define DEFAULT "\033[0m"
#define header_message(x) printf(PINK "\n\n[%s]" DEFAULT, x)
#define TEST(func) header_message(#func); func
void	test_ft_a(void)
{

}

void	test_ft_isalpha(void)
{

}

void	test_ft_isdigit(void)
{

}

void	test_ft_isalnum(void)
{

}

void	test_ft_isascii(void)
{

}

void	test_ft_isprint(void)
{

}

void	test_ft_strlen(void)
{

}

void	test_ft_memset(void)
{

}

void	test_ft_bzero(void)
{

}

void	test_ft_memcpy(void)
{

}

void	test_ft_memmove(void)
{

}

void	test_ft_strlcpy(void)
{

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
TEST(test_ft_a());
TEST(test_ft_isalpha());
TEST(test_ft_isdigit());
TEST(test_ft_isalnum());
TEST(test_ft_isascii());
TEST(test_ft_isprint());
TEST(test_ft_strlen());
TEST(test_ft_memset());
TEST(test_ft_bzero());
TEST(test_ft_memcpy());
TEST(test_ft_memmove());
TEST(test_ft_strlcpy());
TEST(test_ft_strlcat());
TEST(test_ft_toupper());
TEST(test_ft_tolower());
TEST(test_ft_strchr());
TEST(test_ft_strrchr());
TEST(test_ft_strncmp());
TEST(test_ft_memchr());
TEST(test_ft_memcmp());
TEST(test_ft_strnstr());
TEST(test_ft_atoi());
}

void	test_func(const char* func_name)
{
if(!strcmp(func_name, "ft_a")) TEST(test_ft_a());
if(!strcmp(func_name, "ft_isalpha")) TEST(test_ft_isalpha());
if(!strcmp(func_name, "ft_isdigit")) TEST(test_ft_isdigit());
if(!strcmp(func_name, "ft_isalnum")) TEST(test_ft_isalnum());
if(!strcmp(func_name, "ft_isascii")) TEST(test_ft_isascii());
if(!strcmp(func_name, "ft_isprint")) TEST(test_ft_isprint());
if(!strcmp(func_name, "ft_strlen")) TEST(test_ft_strlen());
if(!strcmp(func_name, "ft_memset")) TEST(test_ft_memset());
if(!strcmp(func_name, "ft_bzero")) TEST(test_ft_bzero());
if(!strcmp(func_name, "ft_memcpy")) TEST(test_ft_memcpy());
if(!strcmp(func_name, "ft_memmove")) TEST(test_ft_memmove());
if(!strcmp(func_name, "ft_strlcpy")) TEST(test_ft_strlcpy());
if(!strcmp(func_name, "ft_strlcat")) TEST(test_ft_strlcat());
if(!strcmp(func_name, "ft_toupper")) TEST(test_ft_toupper());
if(!strcmp(func_name, "ft_tolower")) TEST(test_ft_tolower());
if(!strcmp(func_name, "ft_strchr")) TEST(test_ft_strchr());
if(!strcmp(func_name, "ft_strrchr")) TEST(test_ft_strrchr());
if(!strcmp(func_name, "ft_strncmp")) TEST(test_ft_strncmp());
if(!strcmp(func_name, "ft_memchr")) TEST(test_ft_memchr());
if(!strcmp(func_name, "ft_memcmp")) TEST(test_ft_memcmp());
if(!strcmp(func_name, "ft_strnstr")) TEST(test_ft_strnstr());
if(!strcmp(func_name, "ft_atoi")) TEST(test_ft_atoi());
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
