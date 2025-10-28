
NAME=libft.a
ROOT=.
CODEDIRS=$(ROOT)
INCDIRS=$(ROOT)
TEST=.test.c
TESTP=.testp
PWD=.tests

GREEN=\033[38;5;118m
LORANGE=\033[38;5;216m
LGREEN=\033[38;5;115m
LPINK=\033[38;5;225m
YELLOW=\033[38;5;220m
RED=\033[38;5;197m
BLUE=\033[38;5;45m
PURPLE=\033[38;5;63m
PINK=\033[38;5;207m
BLACK=\033[38;5;0m
BG_GREEN=\033[48;5;82m
BG_RED=\033[48;5;197m
GREY=\033[38;5;8m
BOLD=\033[1m
DEFAULT=\033[0m
CHECKMARK=\xE2\x9C\x93

CC=gcc
DEPFLAGS=-MP -MD # generate dependency files (for headers support)
CFLAGS=-g -Wall -Werror -Wextra $(foreach D, $(INCDIRS), -I$(D))

CFILES=$(patsubst $(TEST), '', $(foreach D, $(CODEDIRS), $(wildcard $(D)/*.c)))
OBJECTS=$(patsubst %.c,%.o,$(CFILES)) # pattern substitution
DEPFILES=$(patsubst %.c,%.d,$(CFILES))
PARENT_DIR=$(dir $(CURDIR))

all: test

test: $(TESTP)
	@printf "$(BLUE)"
	norminette || true
	@sleep 0.5
	@printf "$(DEFAULT)"

	@printf "$(YELLOW)"
	@echo "Running tests"
	@printf "$(DEFAULT)"
	@$(ROOT)/$(TESTP)
	@echo ""

$(TESTP): $(NAME) $(TEST) .for_each_tests.h .config.h
	@echo
	@printf "$(PURPLE)"
	@echo "compiling tests..."
	@printf "$(DEFAULT)"
	@$(CC) $(CFLAGS) $(CURDIR)/$(TEST) -o $@ -lbsd -l:$(NAME) -L$(PARENT_DIR)

$(NAME): ../Makefile
	@cd .. && make -f ./Makefile

preproc: $(TEST)
	$(CC) $(CFLAGS) -E $<