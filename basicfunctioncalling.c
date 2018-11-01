#include <stdio.h>
  void italy ();
  void brazil ();
  void argentina();
  void india();
 void main ()
 {
 	printf(" now i am in main \n\n");
 	italy();
 	india();
 	printf("at last i am back in main \n\n");
 }
 
    void italy()
    {
    	printf("i am in italy\n\n");
    	brazil();
        printf(" i am back in italy\n\n");
    	india();
    	
    	
	}
	 
	void brazil()
	{
		printf(" i am in brazil\n\n");
		argentina();
		printf(" i am back in brazil\n\n");
	    india();
	   }   
	   
	   void argentina()
	   {
	   	printf(" i am in argentina\n\n");
	  	india();
	   }
	   
	   void india ()
	   {
	   	printf("i love my country\n\n\n");
	   }
