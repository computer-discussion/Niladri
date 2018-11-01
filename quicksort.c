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

 int quick_sort(int* array,int start,int end)
 { int index;
 
       if(start < end)
    {
 
	      index = pivot_element(array,start,end);
	
	      quick_sort(array,start,index-1);
	   
	      quick_sort(array,index+1,end);
    }

}

 int pivot_element(int* a,int start,int end)
 {
 	int pivot,index,temp1,temp2,i;
	
	index = start-1;
	
	for(i=start;i<=end-1;i++)
	{
		if(a[i] <= a[end])
		{  
		    index++;
		   
			temp1=a[i];
			a[i]=a[index];
			a[index]=temp1;
			
		}
	}
	
	        temp2=a[end];
			a[end]=a[index+1];
			a[index+1]=temp2;
			
	return (index+1);
 }

 int main()
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
	
	quick_sort(array,0,size_of_array-1);
	sortTesting (array,size_of_array,up);
	
	printf("quick sorted array is \n");
	
	
	for (i=0 ; i<size_of_array ; i++)
	{
		printf("\narray[%d]= %d\n", i, array[i]);
	}
 }
