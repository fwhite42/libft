COMPILE				:= gcc

BIN := bin

LINK_LIBFT			:= -I/Users/fcandia/libft/libft/src -L/Users/fcandia/libft/libft -lft

FUNCTIONS			:= atoi bzero

$(FUNCTIONS):%: /Users/fcandia/libft/libtest/tests/%.c $(BIN)
	$(COMPILE) $< -o $(BIN)/$* $(LINK_LIBFT) -c tests/libtest.h

$(BIN):
	mkdir $(BIN)

all: $(FUNCTIONS)

clean:
	rm -rf $(BIN)

.PHONY: all clean
