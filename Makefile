node := /goinfre/fcandia/nodejs/bin/node

node_repl:
	$(node)

all: libft tests

libft:
	$(MAKE) --directory=libft libft.a

tests:
	$(MAKE) --directory=libtest all

clean:
	$(MAKE) --directory=libft fclean
	$(MAKE) --directory=libtest clean

.PHONY: node_repl libft tests all
