#Makefile for libmy.a
NAME = libmylist.a
SRC = new_node.c add_node.c add_elem.c append.c add_node_at.c remove_node.c remove_node_at.c remove_last.c count_nodes.c empty_list.c node_at.c elem_at.c traverse_char.c traverse_string.c traverse_int.c 
OBJ = $(SRC:.c=.o)
RM = rm -f
LIBPATH = ../lib
TESTSRC = mytest3.c
TESTOBJ = $(TESTSRC:.c=.o)
TESTNAME = mytest
LIBS = -lmylist -lmy

#
all: $(OBJ)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)
	mv $(NAME) $(LIBPATH)

test: all $(TESTOBJ)
	cc -L$(LIBPATH) $(TESTOBJ) $(LIBS) -o $(TESTNAME)

clean:
	-$(RM) *~
	-$(RM) \#*
	-$(RM) *.o
	-$(RM) *.swp
	-$(RM) *.core

fclean: clean
	-$(RM) $(NAME)
	-$(RM) $(TESTNAME)

re: fclean all 
