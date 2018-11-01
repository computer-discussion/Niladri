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
				printf ("\nNot correct. Direction:UP - %d < %d\n", a[i], a[i-1]);
				return;
			}
		}
		else{
			if (a[i] > a[i-1])
			{
				success = 0;
				printf ("\nNot correct. Direction:Down - %d > %d\n", a[i], a[i-1]);
				return;
			}
		}
		
	}
	printf ("\nCorrect!!\n", a[i], a[i-1]);
	return;
}


void bubble_sort_asc(int*arr,int size)
{
	
    int i,j,temp;
    for(j=0;j<=size-1;j++)
    {
	
    for(i=0;i<=size-(1+j);i++)
    { 
    	if(arr[i]>arr[i+1])
    	{
		 temp = arr[i];
    	 arr[i]=arr[i+1];
    	 arr[i+1]=temp;
        }
	}
	
    }

	
}

void bubble_sort_des(int*arr,int size)
{
	
    int i,j,temp;
    for(j=0;j<=size-1;j++)
    {
	
    for(i=0;i<=size-(1+j);i++)
    { 
    	if(arr[i]<arr[i+1])
    	{
		 temp = arr[i];
    	 arr[i]=arr[i+1];
    	 arr[i+1]=temp;
        }
	}
	
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
		arr[i] = rand()%(size_of_array*10)+ (i+1)*100;
		printf("\narray[%d]= %d\n", i, arr[i]);
	}
	
	
     bubble_sort_asc(arr,size_of_array);
     
     sortTesting (arr,size_of_array,up);
     
     printf("\n\n");
     printf("\n\n bubble sort in asc order\n");
     for (i=0 ; i<=size_of_array-1 ; i++)
	{
		
		printf("\n sorting array[%d]= %d\n",i,arr[i]);
	}
	
	
     bubble_sort_des(arr,size_of_array);
     sortTesting (arr,size_of_array,down);
     
     printf("\n\n");
     printf("\n\n bubble sort in des order\n");
     for (i=0 ; i<=size_of_array-1 ; i++)
	{
		
		printf("\n sorting array[%d]= %d\n",i,arr[i]);
	}
}
