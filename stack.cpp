//stack//
         
#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>//headerfiles//
#define size 10 //macros//
 int A [size];//array size declaration//
 int v,top = -1;// global declaration//
 
  
  
   void push (int v) // push-function //
    { int a;
    	if( top == size -1)// size -1 means the heghest position of that array(stack..)//
    	{
		
		
    	printf(" the stack is full...... \n");
    }
       else
       {
       	a[++top] = v;
       	printf("the number is pussed %d",v);	//top++; A[++top]=v;
                                             //	A [top]= v;// top++; A=x;:::::: at first increase the top then copy the value from x to A...//
	   }
	   printf("\n");
  }
	
	
	void pop () // pop-funtion //
	{
		if (top == -1 )// top = -1 is the empty position of the array(stack..)//
		{
		
		printf(" the stack is empty::::: \n");
	    }
	    else 
	    {
		
	    v = a [top--];
	    printf("%d is popped form the stack",v); /* top--;  int x = A[top --];//at first copy the value then decrement..// */
	    }
	     printf("\n");
		 }
	
	 
	 
    int peep()  // peep-function //
	{
      if(top == -1) 
      {
      	printf(" the stack is empty :::::\n");
	  }
	  else{
	  	 v = a[top];
		  printf("the value of the top position is")  
	  }
	}
	
	
	  void main ();
	   {
	   	int option, n=1;
	   	printf("**********hello NILADRI it is stack********\n\n");
	   	while(!=0)
	   	{
	   		printf("MENU\n\n");
	   		printf("type 1 for push\n\n type 2 for pop\n\n type 3 forpeep\n\n type4to exit this stack\n\n\n\n");
	   		
	   		 printf(" enter the option ::::::");
	   		 scanf("%d",& option);
	   		 printf("\n\n\n");
	   		 
	   		 
	   		 
	   		 	switch( option)
	   		 	{
	   		 		case 1 :
	   		 			{
	   		 				printf("you chose push::::!\n\n");
	   		 				printf("enter the value::::::");
	   		 				scanf ("%d",&v);
	   		 				printf("\n\n");
	   		 				push(v);
	   		 				break;
	   		 				
							}
							case 2 :
								{
									printf(" you chose pop!\n\n");
									pop();
									printf("\n\n");
									break;
							    }
							    case 3:
							    {
							    	printf(" you chose peep!\n\n");
									peep();
									printf("\n\n");
									break;
								}
								case 4 :
									{
									 n = 0 ;
								     break ;
									}
							default :
								printf("invalid option!\n\n");
								break;
					}
				}
				
			}
