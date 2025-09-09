NAME		=	libft.a

SRC_FILES	=	ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint\
				ft_itoa ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset ft_putchar_fd ft_putendl_fd\
				ft_putnbr_fd ft_putstr_fd ft_split ft_strchr ft_strdup ft_striteri ft_strjoin ft_strlcat\
				ft_strlcpy ft_strlen ft_strmapi ft_strncmp ft_strnstr ft_strrchr ft_strtrim ft_substr\
				ft_tolower ft_toupper
BONUS_FILES	=	ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone ft_lstiter ft_lstlast ft_lstmap\
				ft_lstnew ft_lstsize
EXTRA_FILES	=	ft_printf ft_printf_utils ft_printf_utils2 get_next_line_bonus get_next_line_utils_bonus

SRC_DIR		=	src/
OBJ_DIR		=	obj/
INC_DIR		=	include/

SRC			=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
BONUS		=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(BONUS_FILES)))
EXTRA		=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(EXTRA_FILES)))

OBJ         =	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
BONUS_OBJ	=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(BONUS_FILES)))
EXTRA_OBJ	=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(EXTRA_FILES)))

CC			=	cc -g
CFLAGS		=	-Wall -Werror -Wextra -I$(INC_DIR)
LIB			=	ar rcs
RM			=	rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $^
	@echo "libft built!"

bonus: .bonus
extra: .extra

.bonus: $(OBJ) $(BONUS_OBJ)
	$(LIB) $(NAME) $^
	@touch $@
	@echo "libft (with bonus) built!"

.extra: $(OBJ) $(BONUS_OBJ) $(EXTRA_OBJ)
	$(LIB) $(NAME) $^
	@touch $@
	@echo "libft (with extra) built!"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	$(RM) $(OBJ_DIR) .bonus .extra

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean extra fclean re