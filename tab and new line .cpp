#include<stdio.h>
#include<string.h>
  void point (char* c)
   {
   	while(*c!= '\0');
   	 {
   	 	printf("%c \n",* c);
   	 	c++;
   	 }
   	 if (*c='\t')
   	 {
   	 	printf("\t %c",*c);
		}
		if(*c='\n')
		{
			printf("\n %c",*c);
		
     	}
     }
     int main()
     {
     	char c[50]="\t....\t&\t%\t....\n***";
     	printf(c);
	 }

   
   
   
   
   
   
   	  
   
