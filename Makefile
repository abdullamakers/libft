NAME = libft.a
CC =  cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

INC_DIR = include

MANDATORY = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strcmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjob.c \
			ft_strtrim.c\

BONUS = \

OBJ_FILES_MANDATORY = $(MANDATORY:.c=.o)
OBJ_FILES_BONUS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES_MANDATORY)
	$(AR) $@ $^

bonus: $(OBJ_FILES_BONUS)
	$(AR) $(NAME) $^

clean:
	rm -f $(OBJ_FILES_MANDATORY) $(OBJ_FILES_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all