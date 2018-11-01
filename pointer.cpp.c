/*POINTER:::  POINTER IS A VARIABLE WHICH CAN STORE AN ADDRESS OF ANOTHER VARIABLE */

#include<stdio.h>
int main()
{
	int* l; //pointer initialization...
	int m=10;//normal variable initialization...
	l= &m;//store the address of normal variable in pointer...
	printf("value of m= %d\n",m);
	printf("address of m= %d\n\n\n",&m);
    printf("value of l= %d\n",l);
     printf("address of l= %d\n\n\n\n",&l);
    *l=6;//derefferencing...
    printf("after derefferencing the value of m= %d\n",m);
    printf("using single pointer access the m value by pointer l= %d\n\n\n\n",*l);
    printf("value of l= %d\n",l);
    printf("addition l+2= %d\n",l+2);//pointer arithmetic....
    printf("minus l-2= %d\n\n\n\n",l-2);//pointer arithmetic....
    
    int **q=&l;//double pointer...
    int ***c=&q;//triple pointer...
     printf("using single pointer access the m value by pointer l= %d\n",*l);
    printf("access the main value using double pointer**q=%d\n",**q); 
    printf("address of l = %d\n",&l);
    printf("value of q =%d\n",q);
	printf("address of q =%d\n",&q);  
	printf("value of c =%d\n",c); 
    printf("access the main value using triple pointer ***c=%d\n\n\n",***c);
	
	***c =100;//derefferencing...
	printf("derefferencing the main value (m) using triple pointer =%d\n\n\n",m) ;
    
    
    /* pointer in array
     base address==== p / a / &a[0] / (p+0)
	    base value========*p / *(a+0) / a[0] / *(p+o) / p[0]
	    
	    modify address====p+1 / a+1 / &a[1]
	    modify value======*(p+1) / *(a+1) / a[1] /p[1]       */
	    
	    
	  int a[5] ={11,22,33,44,55};
	  float * p;
	  p =&a;//int* p= &a
	  int i=0;
	  for(i=0;i<5;i++)
	  {
	  	printf("%d\n\n", p+i);
        //printf("%d\n",(p+1));	  
	     
	    printf("%d\n\n",*(p+i)); 
	  	
	  }
    
    
}
