SRC= ../src

CFILES= $(SRC)/main.c $(SRC)/bread_constant_pool.c $(SRC)/bread_magic.c $(SRC)/bread_versions.c $(SRC)/bread_interfaces.c $(SRC)/bread_fields.c $(SRC)/bread_attributes.c $(SRC)/bread_methods.c $(SRC)/bprint_classfile.c $(SRC)/bread_classfile.c $(SRC)/bfree_classfile.c $(SRC)/mnemonic.c $(SRC)/utils.c $(SRC)/initialize.c $(SRC)/main.c $(SRC)/cstack.c $(SRC)/method_area.c $(SRC)/jvm.c $(SRC)/clist.c $(SRC)/frame.c $(SRC)/celement.c $(SRC)/attributes.c $(SRC)/constant_pool.c $(SRC)/bytecode.c $(SRC)/engine.c $(SRC)/objectref.c $(SRC)/instance.c $(SRC)/array.c $(SRC)/field_object.c $(SRC)/string.c

OFILES= ./main.o ./bread_constant_pool.o ./bread_magic.o ./bread_versions.o ./bread_interfaces.o ./bread_fields.o ./bread_attributes.o ./bread_methods.o ./bread_classfile.o ./bprint_classfile.o ./bfree_classfile.o ./mnemonic.o ./utils.o ./initialize.o ./cstack.o ./method_area.o ./jvm.o ./clist.o ./frame.o ./celement.o ./attributes.o ./constant_pool.o ./bytecode.o ./engine.o ./objectref.o ./instance.o ./array.o ./field_object.o ./string.o

FLAGS= -g -std=c99 -Wall -pedantic -Wpedantic -Werror -lm

ifeq ($(OS), Windows_NT)
NAME= breader
else
NAME= breader.out
endif

all: objects main clean

objects: $(CFILES)
	gcc -c $(CFILES) $(FLAGS)

main: $(OFILES)
	gcc -o ./$(NAME) $(OFILES) $(FLAGS)
clean:
ifeq ($(OS), Windows_NT)
	rm *.o
else
	rm *.o
endif
