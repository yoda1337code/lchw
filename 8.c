#include<stdio.h>

int main(int argc,char *argv[])
{

  int i = 0;
  if (argc == 1)
  {
  	printf("You only have one argument \n"); // your program name is the first argument

  	 for(i=0;i<argc;i++)
     {
  	  printf("%s \n",argv[i]);
     } 
  }


  else if(argc>1 && argc<4)
  {
  	
  	printf("Here is your arguments \n");
  	for(i=0;i<argc;i++)
  	{
  		printf("%s ",argv[i]);
  	}
  	
  	printf("\n");
  }
   
  else
  {
    printf("too many arguments");
  }





}