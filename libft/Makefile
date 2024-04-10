NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = \
	ft_memccpy.c	ft_putstr.c	ft_striteri.c	ft_strrchr.c \
	ft_atoi.c	ft_memchr.c	ft_putstr_fd.c	ft_strjoin.c	ft_strstr.c \
	ft_bzero.c	ft_memcmp.c	ft_split.c	ft_strlcat.c	ft_strtrim.c \
	ft_calloc.c	ft_memcpy.c	ft_strcat.c	ft_strlcpy.c	ft_substr.c \
	ft_isalnum.c	ft_memdel.c	ft_strchr.c	ft_strlen.c	ft_tolower.c \
	ft_isalpha.c	ft_memmove.c	ft_strclr.c	ft_strmapi.c	ft_toupper.c \
	ft_isascii.c	ft_memset.c	ft_strcmp.c	ft_strncat.c	\
	ft_isdigit.c	ft_putchar_fd.c	ft_strcpy.c	ft_strncmp.c \
	ft_isprint.c	ft_putendl_fd.c	ft_strdel.c	ft_strncpy.c \
	ft_itoa.c	ft_putnbr_fd.c	ft_strdup.c	ft_strnstr.c \

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re