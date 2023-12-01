.SILENT:

TOUCH_LIBFT := touch libft/*

MAKE_LIBFT := $(MAKE) --silent --directory=libft

MAKE_LIBFT_LIBFT := $(MAKE_LIBFT) libft.a
MAKE_LIBFT_ALL := $(MAKE_LIBFT) all
MAKE_LIBFT_CLEAN := $(MAKE_LIBFT) clean
MAKE_LIBFT_FCLEAN := $(MAKE_LIBFT) fclean
MAKE_LIBFT_RE := $(MAKE_LIBFT) re

PRINT_LIBFT := ls libft; echo;


all: libft tests

norminette_check:
	norminette libft

makefile_check_%:
	@echo make $*
	$(MAKE_LIBFT) $*
	$(PRINT_LIBFT)

touch_all:
	$(TOUCH_LIBFT)

makefile_check:	touch_all\
				makefile_check_all\
				makefile_check_clean\
				makefile_check_libft.a\
				makefile_check_fclean

libft:
	@$(MAKE) --directory=libft libft.a

tests: ./libft/libft.a
	$(MAKE) --directory=test bin

clean:
	$(MAKE) --directory=libft fclean
	$(MAKE) --directory=test clean

.PHONY: libft norminette_check makefile_check touch_all
