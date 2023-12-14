# SILENT MAKEFILE

.PHONY : all clean fclean bonus $(NAME)

.SILENT:

# VARIABLES > PROJECT NAME

NAME		:=	libft.a

# VARIABLES > FILES

FILES			:=			\
	ft_atoi.c				\
	ft_bzero.c				\
	ft_calloc.c				\
	ft_isalnum.c			\
	ft_isalpha.c 			\
	ft_isascii.c 			\
	ft_isdigit.c 			\
	ft_isprint.c 			\
	ft_itoa.c 				\
	ft_memchr.c 			\
	ft_memcmp.c 			\
	ft_memcpy.c 			\
	ft_memmove.c 			\
	ft_memset.c 			\
	ft_putchar_fd.c			\
	ft_putendl_fd.c			\
	ft_putnbr_fd.c			\
	ft_putstr_fd.c			\
	ft_split.c				\
	ft_strchr.c				\
	ft_strdup.c				\
	ft_striteri.c			\
	ft_strjoin.c			\
	ft_strlcat.c			\
	ft_strlcpy.c			\
	ft_strlen.c				\
	ft_strmapi.c			\
	ft_strncmp.c			\
	ft_strnstr.c			\
	ft_strrchr.c 			\
	ft_strtrim.c			\
	ft_substr.c				\
	ft_tolower.c			\
	ft_toupper.c 

BONUS_FILES		:= 			\
	ft_lstadd_back_bonus.c	\
	ft_lstadd_front_bonus.c	\
	ft_lstclear_bonus.c		\
	ft_lstdelone_bonus.c	\
	ft_lstiter_bonus.c		\
	ft_lstlast_bonus.c		\
	ft_lstmap_bonus.c		\
	ft_lstnew_bonus.c		\
	ft_lstsize_bonus.c

OBJECTS			:= $(FILES:%.c=%.o) 

BONUS_OBJECTS	:= $(BONUS_FILES:%.c=%.o)

# VARIABLES > COMMANDS AND FLAGS

REMOVE_FILE 	:= rm -f

COMPILE			:=	cc

DONT_LINK		:=	-c

FLAGS 			:=	-Wall -Werror -Wextra

# VARIABLES > MISC

OK				:=	✓
KO				:=	✗

# RULES

ft_%.o : ft_%.c
	@printf "Compiling $* ... "
	if $(COMPILE) $(FLAGS) $(DONT_LINK) $< 2> /dev/null ; then \
		printf "$(OK)\n"; \
	else \
		printf "$(KO)\n"; \
	fi
# PHONY RULES

all: $(NAME)

$(NAME): $(OBJECTS)
	@printf "Making $(NAME) ... "
	ar -rc $(NAME) $(OBJECTS)
	@printf "$(OK)\n"

clean :
	@printf "Removing objects ... "
	$(REMOVE_FILE) $(OBJECTS) $(BONUS_OBJECTS)
	@printf "$(OK)\n"

fclean : clean
	@printf "Removing $(NAME) ... "
	$(REMOVE_FILE) $(NAME)
	@printf "$(OK)\n"

bonus : $(NAME) $(BONUS_OBJECTS)
	@printf "Adding bonus functions to $(NAME) ... "
	ar -rc $(NAME) $(BONUS_OBJECTS)
	@printf "$(OK)\n"

re:	fclean all
