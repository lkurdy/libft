NAME = libft.a

CC = gcc -Wall -Wextra -Werror -D BUFFER_SIZE=5

SRCS = ft_bzero.c    ft_isalpha.c  ft_isdigit.c  ft_memcpy.c	ft_memset.c  ft_isalnum.c  ft_isascii.c  ft_isprint.c  ft_memmove.c	ft_strlcat.c  ft_strlen.c  ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c   ft_substr.c  ft_strjoin.c   ft_strtrim.c    ft_itoa.c ft_split.c  ft_strmapi.c  ft_striteri.c  ft_putchar_fd.c  ft_putstr_fd.c  ft_putendl_fd.c  ft_putnbr_fd.c  get_next_line.c get_next_line_utils.c

OBJS = $(SRCS:.c=.o)

BONUS = ft_lstadd_back_bonus.c  ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstdelone_bonus.c ft_lstnew_bonus.c ft_lstlast_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c get_next_line_bonus.c get_next_line_utils_bonus.c

OBJ_BONUS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJ_BONUS)
	ar rc $(NAME) $(OBJS) $(OBJ_BONUS)

clean:
	rm -f $(OBJS) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
