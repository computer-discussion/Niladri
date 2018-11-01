// Insertion sort


void insertion_sort()
{
	
}


int main ()
{
	int *array,size_of_array,i,n=0,option,value;
	
	printf ("Enter the size of the array : ");
	scanf ("%d",&size_of_array);
	
	array = (int *) malloc (sizeof(int) * size_of_array);
		
	for (i=0 ; i<size_of_array ; i++)
	{
		array[i] = rand()%(size_of_array*10);	// + (i+2)*100;
		printf("\narray[%d]= %d\n", i, array[i]);
	}
}
