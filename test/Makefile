COMPILE := gcc -I./include -L./lib

LINK_LIBFT := -lft

LINK_LIBTEST := -ltest

UTILS := $(wildcard ./utils/*.c)

OBJECTS := $(SOURCES:./src/%.c=./obj/%.o)

LIB_DIR := lib

BIN := $(wildecard ./$(BIN_DIR)/*)


./tests/%.c:
	gcc -o ./bin/$*


archive: $(OBJECTS)
	ar -r ./include/libtest.a $(OBJECTS)
	$(MAKE) clean

# Make object, requires source and libft
./obj/%.o :./src/%.c obj ./include/libft.a
	$(COMPILE) $(LINK_LIBFT) -c $< -o $@

# Make all objects
objects: $(OBJECTS)

#
# RULES
#

$(LIB_DIR):
	mkdir $(LIB_DIR)





$(TESTS):


./lib/libtest.a: $(OBJECTS) $(LIB_DIR)
	ac -r ./lib/libtest.a $(OBJECTS)




libtest: ./lib/libtest.a clean

./lib/libft.a:
	$(MAKE) -C .. libft
	cp ../libft/libft.h ./include/libft.h;
	mv ../libft/libft.a ./include/libft.a;

obj:
	mkdir obj

clean:
	rm -rf obj
fclean: clean
	rm ./include/libft*
	rm ./include/libtest.a
	rm -rf ../bin

../bin:
	mkdir ../bin

%:./tests/%.c ../bin .
	$(COMPILE) -ltest $< -o ../bin/$*.exe


.PHONY: objects clean
