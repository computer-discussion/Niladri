/*
	Author: niladri banerjee
	Date: 08-09-18 21:37
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
				printf ("\n\n\tNot correct. Direction:UP - %d < %d\n", a[i], a[i-1]);
				return;
			}
		}
		else{
			if (a[i] > a[i-1])
			{
				success = 0;
				printf ("\n\n\tNot correct. Direction:Down - %d > %d\n", a[i], a[i-1]);
				return;
			}
		}

	}
	if(success == 1)
	{
	
	printf ("\n\n\tCorrect!!\n", a[i], a[i-1]);
	return;
   }
}


int search_min_number(int*arr,int k,int size)
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
  //return(min);
  return(address_node);
}



int search_max_number(int*arr,int k,int size)
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


void selection_sort_des(int*arr,int size)
{
	int temp,k,address_node;

   for(k=0;k<=size-1;k++)
   {
   	address_node = search_max_number(arr,k,size);

   	temp = arr[k];
   	arr[k] = arr[address_node];
   	arr[address_node]=temp;
   }
}



void selection_sort_asc( int* arr,int size)
{
   int temp,k,address_node;

   for(k=0;k<=size-1;k++)
   {
   	address_node = search_min_number(arr,k,size);

   	temp = arr[k];
   	arr[k] = arr[address_node];
   	arr[address_node]=temp;
   }
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

void heap_sort (int*arr,int size)
{
	
}
void ran_num (int* a , int size)
{
	int i;
	for (i=0 ; i<size ; i++)
	{
		a[i] = rand() % (10*size);
	}
}


int main ()
{
      int *array,size_of_array,i,k,n=0,option,value;
	
	printf ("Enter the size of the array : ");
	scanf ("%d",&size_of_array);
	
	array = (int *) calloc (sizeof(int) , size_of_array);
		
	for (i=0 ; i<size_of_array ; i++)
	{
		array[i] = rand()%(size_of_array*10);	// + (i+2)*100;
		printf("\narray[%d]= %d\n", i, array[i]);
	}
	
	
 
  
	while (n != 1)
	{
		printf("\n\n");
		printf ("press 0 to print the array with random numbers\n\n");
		printf ("press 1 to search the min number in the array\n\n");
		printf ("press 2 to search the max number in the array\n\n");
		printf ("press 3 to sort the array in ascending order with selection method\n\n");
		printf ("press 4 to sort the array in descending order with selection method\n\n");
		printf ("press 5 to sort the array in ascending order with bubble method\n\n");
		printf ("press 6 to sort the array in descending order with bubble method\n\n");
		printf ("press 7 to fill the array again with random numbers\n\n");
		printf ("press 8 to close the program \n\n");
		printf ("Enter the option : ");
		scanf ("%d",&option);
		printf ("\n\n");

		switch (option)
		{
			case 0 :
				{
					printf ("The array is : \n\n");
					for (i=0 ; i<size_of_array ; i++)
						printf ("%d\t" , array[i]);
					printf ("\n\n");
					break;
				case 1 :
				{
					
				    search_min_number(array,k,size_of_array);
				    //printf ("this is the min number in the giving array-> : %d  address-> %d\t");
					break;
				}
			case 2 :
				{
						
				    search_max_number(array,k,size_of_array);
				    //printf ("this is the max number in the giving array-> : %d  address-> %d\t");
					break;
				}
			case 3 :
				{
					selection_sort_asc(array,size_of_array);
					sortTesting(array,size_of_array, up);
					printf("\n The array is sorted into ascending order with selection method\n");
					
					break;
				}
				
			case 4:
				{
					selection_sort_des(array,size_of_array);
					sortTesting(array,size_of_array, down);
					printf("\n The array is sorted into descending order with selection method\n");
					break;
				}
			case 5 :
				{
					bubble_sort_asc(array , size_of_array);
					sortTesting(array,size_of_array, up);
					printf ("\n The array is sorted into ascending order with bubble method\n\n");
					break;
				}
				
			case 6 :
			{
				
					bubble_sort_des(array , size_of_array);
					sortTesting(array,size_of_array, down);
					printf ("\n The array is sorted into descending order with bubble method\n\n");
					break;
			}
				
			case 7 :
				{
					ran_num(array , size_of_array);
					printf ("\n The array is filled with random numbers!\n\n");
					break;
				}
			case 8 :
				{
				printf ("\n The program ends here !!!!\n\n");
				n = 1;
				break;
				}
			default :
				printf ("\n Wrong option!!!\n\n");
				break;
		}
	}
}

}

