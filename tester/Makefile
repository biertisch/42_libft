LIB		=	../libft.a

TEST_FILES	=	test test_utils
TESTB_FILES	=	test_bonus test_bonus_utils

TEST_SRC	=	$(addsuffix .c, $(TEST_FILES))
TESTB_SRC	=	$(addsuffix .c, $(TESTB_FILES))

TEST		=	test.out
TEST_BONUS	=	test_bonus.out

CC			=	cc -g
CFLAGS		=	-Wall -Werror -Wextra -I. -lreadline -lbsd
RM			=	rm -rf

all: test

test: $(NAME) $(TEST_SRC)
	@$(CC) $(TEST_SRC) $(LIB) -o $(TEST) $(CFLAGS)
	@./$(TEST)

test_bonus: bonus $(TESTB_SRC)
	@$(CC) $(TESTB_SRC) $(LIB) -o $(TEST_BONUS) $(CFLAGS)
	@./$(TEST_BONUS)

$(NAME):
	@$(MAKE) -C ../

bonus:
	@$(MAKE) -C ../ bonus

clean:
	@echo "Removing executable..."
	@$(RM) $(TEST) $(TEST_BONUS)

fclean: clean

re: fclean all

.PHONY: all bonus clean fclean re test test_bonus