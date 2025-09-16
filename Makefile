NAME		=	libft.a

SRC_FILES	=	ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint\
				ft_itoa ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset ft_putchar_fd ft_putendl_fd\
				ft_putnbr_fd ft_putstr_fd ft_split ft_strchr ft_strdup ft_striteri ft_strjoin ft_strlcat\
				ft_strlcpy ft_strlen ft_strmapi ft_strncmp ft_strnstr ft_strrchr ft_strtrim ft_substr\
				ft_tolower ft_toupper
BONUS_FILES	=	ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone ft_lstiter ft_lstlast ft_lstmap\
				ft_lstnew ft_lstsize
EXTRA_FILES	=	ft_printf ft_printf_utils get_next_line_bonus count_digits free_string_array ft_atol\
				ft_is_space ft_itoa_base ft_strcmp print_int_array print_list print_string_array

SRC_DIR		=	src/
OBJ_DIR		=	obj/
INC_DIR		=	include/
TEST_DIR	=	tester/

SRC			=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
BONUS_SRC	=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(BONUS_FILES)))
EXTRA_SRC	=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(EXTRA_FILES)))

OBJ         =	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
BONUS_OBJ	=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(BONUS_FILES)))
EXTRA_OBJ	=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(EXTRA_FILES)))

CC			=	cc -g
CFLAGS		=	-Wall -Werror -Wextra -I$(INC_DIR)
LIB			=	ar rcs
RM			=	rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Linking library..."
	@$(LIB) $(NAME) $^
	@echo "libft built!"

bonus: .bonus
extra: .extra

.bonus: $(OBJ) $(BONUS_OBJ)
	@echo "Linking library..."
	@$(LIB) $(NAME) $^
	@touch $@
	@echo "libft (with bonus) built!"

.extra: $(OBJ) $(BONUS_OBJ) $(EXTRA_OBJ)
	@echo "Linking library..."
	@$(LIB) $(NAME) $^
	@touch $@
	@echo "libft (with extra) built!"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJ_DIR) compile_message
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

compile_message:
	@echo "Compiling object files..."

test:
	@$(MAKE) -C $(TEST_DIR)

test_bonus:
	@$(MAKE) -C $(TEST_DIR) test_bonus

clean:
	@echo "Removing object files..."
	@$(RM) $(OBJ_DIR) .bonus .extra

fclean: clean
	@echo "Removing executable..."
	@$(RM) $(NAME)
	@$(MAKE) -C $(TEST_DIR) fclean > /dev/null

re: fclean all

.PHONY: all bonus clean extra fclean re test test_bonus