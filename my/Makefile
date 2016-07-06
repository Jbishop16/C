#Makefile for libmy.a
NAME = libmy.a
SRC = my_char.c my_str.c my_int.c my_num_base.c my_alpha.c my_digits.c my_strindex.c my_strrindex.c my_strlen.c my_revstr.c my_find.c my_rfind.c my_strcat.c my_strcmp.c my_strncmp.c my_strconcat.c my_strnconcat.c my_stdstrconcat.c my_strcpy.c my_strncpy.c my_strdup.c xmalloc.c my_vect2str.c my_str2vect.c my_atoi.c
OBJ = $(SRC:.c=.o)
TESTSRC = mytest2.c
TESTOBJ = $(TESTSRC:.c=.o)
TESTNAME = test
RM = rm -f
LIBPATH = ../lib
LIBS = -lmy

#
all: $(OBJ)
	ar -rc $(LIBPATH)/$(NAME) $(OBJ)
	ranlib $(LIBPATH)/$(NAME)

test: all $(TESTOBJ)
	cc -L$(LIBPATH) $(TESTOBJ) -o $(TESTNAME) 

clean: 
	-$(RM) *~
	-$(RM) \#*
	-$(RM) *.o
	-$(RM) *.swp
	-$(RM) *.core

fclean: clean
	-$(RM) $(LIBPATH)/$(NAME)

re: fclean all clean
