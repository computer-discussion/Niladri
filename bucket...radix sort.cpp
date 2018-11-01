#include<stdio.h>
#include<stdlib.h>

int print(int*arr,int size)
{
	int i;
	
	for(i=0;i<size;i++)
	{
		printf("\n%d",arr[i]);
	}
	
}


int count_bignumber(int number)
{
	int i=0;
	while(number>0)
	{
		i++;
		number=number/10;
	}
	
	return (i);
}


int bignumber(int*arr,int size)
{
	int i,count;
	int temp = arr[0];
	
	  for(i=0;i<size;i++)
	    {
	    	 if(arr[i]>temp)
	    	   temp = arr[i];
		}
		
	count =	count_bignumber(temp);
	return (count);
}

int radix_sort()
{
	
}


int radix (int*arr,int size)
{
	int big = bignumber(arr,size);
	//printf("\n\n%d",big);
	int arr2[size];
	//int arr3[size][size];
	int i;
	
	for (i=0;i<size;i++)
	   {
	   	   arr2[i]=0;
	   }
	
	
  // print(arr2,size);
}


int main()
{
	int *arr,size_of_array,i;
	
	printf ("Enter the size of the array : ");
	scanf ("%d",&size_of_array);
	
	arr = (int *) calloc (sizeof(int) , size_of_array);
	
	printf("\n unsorted array:-> \n");
		
	for (i=0 ; i<size_of_array ; i++)
	{
		arr[i] = rand();//%100;
		printf("\narray[%d]= %d\n", i, arr[i]);
	}
	
	radix (arr,size_of_array);
}
