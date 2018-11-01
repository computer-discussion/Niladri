#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int *arr,size_of_array,i,n=0,option,value;
	
	printf ("Enter the size of the array : ");
	scanf ("%d",&size_of_array);
	

	if(size_of_array % 2 == 0)
	{
		printf("\n NOT POSSIBLE TO PRINT THE PATTERN SIZE OF ARRAY HAVE TO ODD ");
	}
	else
	{
	  		arr = (int *) calloc (sizeof(int) , size_of_array);
		
	          for (i=0 ; i<size_of_array ; i++)
	         { 
		            scanf("%d", & arr[i]);
	         }
	         
	         
	
	}
}
