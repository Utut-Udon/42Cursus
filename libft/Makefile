NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = \
	ft_lstiter.c		ft_putnbr_fd.c		ft_strlcpy.c \
	ft_atoi.c		ft_lstlast.c		ft_putstr.c		ft_strlen.c \
	ft_bzero.c		ft_lstmap.c		ft_putstr_fd.c		ft_strmapi.c \
	ft_calloc.c		ft_lstnew.c		ft_split.c		ft_strncat.c \
	ft_isalnum.c		ft_lstsize.c		ft_strcat.c		ft_strncmp.c \
	ft_isalpha.c		ft_memccpy.c		ft_strchr.c		ft_strncpy.c \
	ft_isascii.c		ft_memchr.c		ft_strclr.c		ft_strnstr.c \
	ft_isdigit.c		ft_memcmp.c		ft_strcmp.c		ft_strrchr.c \
	ft_isprint.c		ft_memcpy.c		ft_strcpy.c		ft_strstr.c \
	ft_itoa.c		ft_memdel.c		ft_strdel.c		ft_strtrim.c \
	ft_lstadd_back.c	ft_memmove.c		ft_strdup.c		ft_substr.c \
	ft_lstadd_front.c	ft_memset.c		ft_striteri.c		ft_tolower.c \
	ft_lstclear.c		ft_putchar_fd.c		ft_strjoin.c		ft_toupper.c \
	ft_lstdelone.c		ft_putendl_fd.c		ft_strlcat.c \

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