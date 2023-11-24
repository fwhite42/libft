all: libft tests

libft:
	$(MAKE) --directory=libft libft.a

tests:
	$(MAKE) --directory=test bin

clean:
	$(MAKE) --directory=libft fclean
	$(MAKE) --directory=test clean

.PHONY: node_repl libft tests all
