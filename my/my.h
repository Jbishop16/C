#ifndef _MY_H_
#define _MY_H_
#ifndef NULL
#define NULL ((void*)0)

/* erase this line after assignment 2 */
int write(int, const void*, int);
/* end of erase */
void my_char(char c);
void my_str(char*);
void my_int(int);
void my_num_base(int, char*);
void my_alpha();
void my_digits();
int my_strindex(char*, char);
int my_strrindex(char*, char);
int my_strlen(char*);
int my_revstr(char*);
char* my_vect2str(char**);

#endif
