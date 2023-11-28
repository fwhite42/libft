NAME := libft.a

FILES := $(wildcard *.c)

OBJECTS := $(wildcard *.o) 

REMOVE_FILE := rm -f

COMPILE := gcc -c

FLAGS := -Wall -Werror -Wextra

%.o : %.c
	$(COMPILE) $(FLAGS) $<

objects : $(FILES:%.c=%.o)

$(NAME): all
	ar -rc libft.a $(OBJECTS)

all: objects

clean :
	$(REMOVE_FILE) $(OBJECTS)

fclean : clean
	$(REMOVE_FILE) $(NAME)

re:	fclean all

.PHONY : all clean fclean objects
