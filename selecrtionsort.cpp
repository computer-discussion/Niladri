/*
	Name: niladri banerjee
	Copyright: none
	Author: niladri banerjee
	Date: 08-09-18 21:37
	Description: 
*/


#include<stdio.h>
#include<stdlib.h>

typedef enum order
{
	up,
	down

}order;

void sortTesting (int *a, int size, order direction)
{
	int success = 1, i;
	for (i=1; i<size; i++)
	{
		if (direction == up)
		{
			if (a[i] < a[i-1])
			{
				
				success = 0;
				printf ("\n\n\n Not correct. Direction:UP - %d < %d\n", a[i], a[i-1]);
				return;
			}
		}
		else{
			if (a[i] > a[i-1])
			{
				success = 0;
				printf ("\n\n\n Not correct. Direction:Down - %d > %d\n", a[i], a[i-1]);
				return;
			}
		}
		
	}
	printf ("\n\n\n Correct!!\n", a[i], a[i-1]);
	return;
}


int search_min(int*arr,int k,int size)
{
	int i=0,min,address_node;
	min=arr[k]; 
    address_node=k;
 
  for(i=k+1;i<=size-1;i++)
  {
  	  if(min>arr[i])
  	  {
  	  	 min = arr[i];
  	  	 address_node=i;
		}
  }    
  printf("\n the minimum value is %d",min);
  return(address_node);
}



int search_max(int*arr,int k,int size)
{
	int i=0,max,address_node;
	max=arr[k]; 
    address_node=k;
 
  for(i=k+1;i<=size-1;i++)
  {
  	  if(max<arr[i])
  	  {
  	  	 max = arr[i];
  	  	 address_node=i;
		}
  }    
  printf("\n the minimum value is %d",max);
  return(address_node);
}


void selection_sort_max(int*arr,int size)
{
	int temp,k,address_node;
   
   for(k=0;k<=size-1;k++)
   {
   	address_node = search_max(arr,k,size);
   	
   	temp = arr[k];
   	arr[k] = arr[address_node];
   	arr[address_node]=temp;
   }
}



void selection_sort_min( int* arr,int size)
{
   int temp,k,address_node;
   
   for(k=0;k<=size-1;k++)
   {
   	address_node = search_min(arr,k,size);
   	
   	temp = arr[k];
   	arr[k] = arr[address_node];
   	arr[address_node]=temp;
   }
}


int main ()
{
	int *arr,size_of_array,i,n=0,option,value;
	
	printf ("Enter the size of the array : ");
	scanf ("%d",&size_of_array);
	
	arr = (int *) calloc (sizeof(int) , size_of_array);
		
	for (i=0 ; i<size_of_array ; i++)
	{
		arr[i] = rand()%(size_of_array*10);	// + (i+2)*100;
		printf("\narray[%d]= %d\n", i, arr[i]);
	}
	
	selection_sort_min(arr,size_of_array);

	
	printf("\n\n");
	printf("\n selection sort using min number \n");
	for (i=0 ; i<size_of_array ; i++)
	{
		printf ("%d\t",arr[i]);
	}
	 
	sortTesting (arr,size_of_array,up);
	selection_sort_max(arr,size_of_array);
		
	printf("\n\n");
	printf("\n selection sort using max number \n");
	for (i=0 ; i<size_of_array ; i++)
	{
		printf ("%d\t",arr[i]);
	}
	
	sortTesting (arr,size_of_array,down);
}
