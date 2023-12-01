COMPILE				:= gcc -I./include -L./include -lft

SOURCES := $(wildcard ./src/*.c)

OBJECTS := $(SOURCES:./src/%.c=./obj/%.o)

TESTS := $(wildecard ./tests/*)

tests : $(TESTS)

./tests/%.c:
	gcc -o ./bin/$*

objects: $(OBJECTS)

archive: $(OBJECTS)
	ar -r ./include/libtest.a $(OBJECTS)
	$(MAKE) clean

./obj/%.o :./src/%.c obj ./include/libft.a
	$(COMPILE) -c $< -o $@

./include/libft.a:
	$(MAKE) -C .. libft
	cp ../libft/libft.h ./include/libft.h;
	mv ../libft/libft.a ./include/libft.a;

obj:
	mkdir obj
bin:
	mkdir bin
clean:
	rm -rf obj
fclean: clean
	rm ./include/libft*
	rm ./include/libtest.a
	rm -rf ../bin

../bin:
	mkdir ../bin

%:./tests/%.c ../bin
	$(COMPILE) -ltest $< -o ../bin/$*.exe
.PHONY: objects clean
