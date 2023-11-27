COMPILE				:= gcc

BIN := ../bin

LINK_LIBFT			:= -I/Users/fcandia/libft/libft/src -L/Users/fcandia/libft/libft -lft

FUNCTIONS			:= atoi

$(FUNCTIONS):%: src/%.c $(BIN)
	$(COMPILE) $< -o $(BIN)/$* $(LINK_LIBFT)

$(BIN):
	mkdir $(BIN)

bin: $(FUNCTIONS)

clean:
	rm -rf $(BIN)

.PHONY: all clean
