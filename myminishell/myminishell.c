#include <unistd.h>
#include "../lib/my.h"

#define BUF_SIZE 512

int main(int argc, char** argv)
{
  unsigned int n;
  unsigned int pid;
  char** exe;
  char* buff = (char*)xmalloc(sizeof(char)*BUF_SIZE);  
  char* dir = (char*)xmalloc(sizeof(char)*BUF_SIZE); 
  int i=0;
  while(1)
    {
      my_str("Go! Go! Go!:");//Starting the shell(while true)
      n=read(0, buff, BUF_SIZE-1);//reading 
      buff[n-1] = '\0';//ending with the \0
      exe = my_str2vect(buff);
      if(n>1)
	{
	  if(my_strncmp("exit", buff, 4) == 0)//For the exit command
	    {
	      my_str("Goodbye.\n");//the "go away" message
	      exit(0);
	    }
	  else if(my_strncmp("cd", buff, 2) == 0)//For the cd command
	    {
	      dir = "\0";
	      if(exe[1][0] == '/')
		{
		  if( chdir(exe[1])<0)
		    my_str("Error: Directory doesn't exist\n");
		}
	      else
		{
		  if(chdir(my_strconcat(my_strconcat(getcwd(dir, BUF_SIZE-1), "/") ,exe[1]))<0)
		    my_str("Error: Directory doesn't exist\n");
		}
	    }
	  else
	    {
	      if((pid = fork())<0)
		my_str("Forking error!\n");
	      else if(pid == 0)
		{
		  if(execvp(*exe, exe)<0)
		    my_str("Invalid command\n");
		  exit(0);
		}
	      else
		{
		  wait();
		}
	    }
	}
    }
  free(buff);
  free(dir);
  for(i=0; exe[i]!=NULL; i++)
    free(exe[i]);
}
