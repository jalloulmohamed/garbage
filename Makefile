CC = CC
NAME = garbage
FLAGS = -Wall -Wextra -Werror

SRC = main.c garbage.c libft/ft_substr.c libft/ft_strdup.c libft/ft_strjoin.c libft/ft_strlen.c libft/ft_calloc.c \


OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ) garbage.h
		$(CC) $(SRC)  -o   $(NAME)
%.o : %.c garbage.h
		$(CC) $(FLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all