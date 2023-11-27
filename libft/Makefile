NAME			:= libft.a
HEADER			:= libft.h

OBJECT_DIRECTORY	:= obj
SOURCE_DIRECTORY	:= src
COMPILE			:= gcc
WITH_FLAGS		:= -Wall -Wextra -Werror
WITHOUT_LINKING		:= -c

FUNCTIONS		:= atoi

$(FUNCTIONS):%:./$(OBJECT_DIRECTORY)/ft_%.o

all: $(FUNCTIONS)

clean:
	rm -rf $(OBJECT_DIRECTORY)

fclean: clean
	rm -rf $(NAME)
	rm -rf $(HEADER).gch

$(OBJECT_DIRECTORY):
	mkdir $@
	$(MAKE) all

./$(OBJECT_DIRECTORY)/ft_%.o : ./$(SOURCE_DIRECTORY)/ft_%.c $(OBJECT_DIRECTORY) ./$(SOURCE_DIRECTORY)/$(HEADER)
	echo compiling... $<:
	$(COMPILE) $(WITHOUT_LINKING)  $< -o $@	
	echo ...done

$(NAME): all
	echo archiving...
	ar -r $(NAME) $(wildcard $(OBJECT_DIRECTORY)/*)
	echo ...done

.PHONY: all clean
