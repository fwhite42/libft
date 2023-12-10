NAME := libft.a

FILES := $(wildcard *.c)

OBJECTS := $(wildcard *.o) 

REMOVE_FILE := rm -f

COMPILE := gcc -c

FLAGS := -Wall -Werror -Wextra

%.o : %.c
	$(COMPILE) $(FLAGS) $<

OBJECTS := $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -r $(NAME) $(OBJECTS)
	$(MAKE) clean

clean :
	$(REMOVE_FILE) $(OBJECTS)

fclean : clean
	$(REMOVE_FILE) $(NAME)
	$(REMOVE_FILE) $(wildcard *.gch)

re:	fclean all

.PHONY : all clean fclean objects
