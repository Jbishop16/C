#include <stdlib.h>
#include <unistd.h>
#ifndef _MY_H_
#define _MY_H_
#ifndef NULL
#define NULL ((void*)0)
#endif

void my_char(char);
void my_str(char*);
void my_int(int);
void my_num_base(int, char*);
void my_alpha();
void my_digits();
int my_strindex(char*, char);
int my_strrindex(char*, char);
int my_strlen(char*);
int my_revstr(char*);
char* my_find(char*, char);
char* my_rfind(char*, char);
char* my_strcat(char*, char*);
int my_strcmp(char*, char*);
int my_strncmp(char*, char*, int);
char* my_strconcat(char*, char*);
char* my_strnconcat(char*, char*, int);
char* my_stdstrconcat(char*, char*, int);
char* my_strcpy(char*, char*);
char* my_strncpy(char*, char*, int);
char* my_strdup(char*);
void* xmalloc(int);
char** my_str2vect(char*);
char* my_vect2str(char**);
int my_atoi(char*);

#endif

