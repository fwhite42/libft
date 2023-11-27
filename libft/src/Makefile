NAME := libft.a

FILES := $(wildcard *.c)

OBJECTS := $(wildcard *.o)

REMOVE_FILE := rm -f

COMPILE := gcc -c

FLAGS := -Wall -Werror -Wextra

$(NAME): all
	ar -rc libft.a $(OBJECTS)

all:
	$(COMPILE) $(FILES)

clean :
	$(REMOVE_FILE) $(OBJECTS)

fclean : clean
	$(REMOVE_FILE) $(NAME)

re:	fclean all

.PHONY : all clean fclean
