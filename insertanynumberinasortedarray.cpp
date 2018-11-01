#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int *arr,size_of_array,i,n=0,option,value,number,flag=0;
	
	printf ("Enter the size of the array : ");
	scanf ("%d",& size_of_array);
	
	arr = (int *) calloc (sizeof(int) , (size_of_array+1));
		
	for (i=0 ; i<size_of_array ; i++)
	{
		arr[i] = rand()%(size_of_array*10) + i*100;
		printf("\narray[%d]= %d\n", i, arr[i]);
	}
	
	printf ("enter the number you want to insert\t");
	scanf ("%d",& number);
	
	
//for (i= size_of_array-1 ; i >= 0 ; i--)
//	{
		//if(arr[i]>number)
	     	//arr[i+1] = arr[i];
	
//	}
	
	i=size_of_array-1;
	while(i>=0 && arr[i]>number)
	{
		arr[i+1] = arr[i];
		i--;
	}
	
	arr[i+1] = number;
	
       for (i=0 ; i<size_of_array+1 ; i++)
	{
	       printf("\narray[%d]= %d\n", i, arr[i]);
	}
	
	

}
