#include<stdio.h>

int fact1(int,int*);

int fact(int);

int recfact(int);


int main()
{
	int k,factorial,factorial1,recft;
	
	printf(" enter the value of k:::::\t");
	scanf("%d",&k);
	
	factorial=fact(k);
	
	printf("\n\n factorial using normal function:::::  %d\n",factorial);
	
	
	fact1(k,&factorial1);
	printf("\n\n factorial using function with pointers ::::::  %d\n", factorial1);
		
	
	recft = recfact(k);
	printf("\n\n factorial using recursion ::::::  %d\n",recft);
	
	printf("\n\n        << program ends >>   ");
}

 int fact (int k) // normal function 
 {
 int i,j=1;
	for(i=1; i<=k; i++)               
    {
		j=j*i;
	}
	return j;
}
	
	
	int fact1 (int k,int*factorial1) // function using pointer
	{
		int i;
		*factorial1 = 1;
		
		for(i=1; i<=k; i++)
		{
			*factorial1 = *factorial1*i;
		}
		
	}
	
	int recfact(int n) // using recursion function
	{
		//int j;
		
		if (n == 0 || n == 1)
		return 1;
		 
		 else
		      return  recfact(n-1)*n;
	          //return j;
		
	}
