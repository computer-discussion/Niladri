#include <stdio.h>
int power (int , int);
int main()
{
	int n,m,k;
	printf ("enter the value of number:::::  \n");
	scanf("%d %d",&n,&m);
	k=power(n ,m);
	printf (" the number uis %d \n",k);
	return 0;
}
      int power (int A ,int B)
      {
      	int i=0, n=1;
        while ( i != A ){
        	    
        	 n=n*B;
        	 i++;
        	
		}
		return n;
      	
	  }

