#include <stdio.h>
#include <stdlib.h>


void linear_Search(int array[], int key,int n)
{
  int i=0; 
  //int nil = 0;
  while(i != n)
    {
    	 if(array[i]==key)
    	 {
    	  //nil = 1;
    	  printf("\n\n linear_search is  successful.\n");
    	  return ;
         }
         
         else
          i++;
    }
    
    //nil =1;

    if(i == n)
     printf("\n\n linear_search is not successful.\n");
}

void linearrec_search(int array[],int key,int i,int n)
{
	//int i=0;
	int  nil = 0;
     //while(i < n)
       //{
    	 if(array[i]==key)
    	 {
    	  nil = 1;
    	  printf("\n\n linearrec_search is successful.\n");
    	  return ;
         }
         
         else
          linearrec_search( array, key,i+1, n);
       // }
    
    //nil =1;
    
    if(i == n)
    printf("\n\n linearrec_search is not successful.\n");
	
}

void binary_Search1(int* array, int key,int size)
{    
   int low = 0;
   int high = size-1;
   int mid = (low+high)/2;
   int nil = 0;
   
   while(low <= high && array[mid] == key)
   {
   	    if(key == array[mid])
   	    {
		
   	    printf(" \n\n binary_search1 is successful \n");
   	    nil=1;
   	    }
		     
   	    else if (key > array[mid])
   	    {
   	       low = mid;
   	       mid = (low +high)/2;
			  	
		}
   	    
   	    else if(key < array[mid])
   	    {
   	       high = mid;
		   mid = (low +high)/2;	
		}
		
   }
   
   if (nil == 0)
   printf("\n\n binary_search1 is not successful");
	
}



void binary_search2(int* array, int key,int size)
{
	
   int low = 0;
   int high = size-1;
   int mid = (low+high)/2;
   int nil = 0;
   
   while(low <= high)
   {    printf(" \n AA ");
   	    if(key == array[mid])
   	    {
		printf(" \n BB ");
   	    printf(" \n\n binary_search2 is successful \n");
   	    nil=1;
   	    }
		     
   	    else if (key > array[mid])
   	    {
   	       printf(" \n a  ");
   	       low = mid+1;
   	       mid = (low +high)/2;
			  	printf(" \n done ");
		}
   	    
   	    else if(key < array[mid])
   	    {
   	    	printf(" \n b ");
   	       high = mid-1;
		   mid = (low +high)/2;	
		}
		
   }
   
   if (nil == 0)
   printf("\n\n binary_search2 is not successful");
}



void binaryrec_search(int array [],int low, int high,int key)
{   //int i,key;

    //for (i=0 ; i<6 ; i++)
	//{
	//	printf (" %d\t",array[i]);
	//}
	
	//printf(" \n\n enter the key : ");
	//scanf("%d",& key);
	
   int mid = (low+high)/2;
   
   if (array[mid] == key)
   {
   
   printf(" \n\n successful binaryrec_search \n");
   //printf("\n else if");
   return;
   
   
   }
   
   else if (array[mid] > key)
    binaryrec_search(array, low, mid,key);
    
   else if (array[mid] < key)
    binaryrec_search(array, mid, high,key);
    
    else if (low <= high)
    printf("\n unsuccessful search");
   
}


	
void  main ()
	
{
	/*int *array,size_of_array,i,n=0,option,value;
	
	printf ("Enter the size of the array : ");
	scanf ("%d",&size_of_array);
	
	array = (int *) malloc (sizeof(int) * size_of_array);
		
	for (i=0 ; i<size_of_array ; i++)
	{
		array[i] = rand()%(10);  //%(size_of_array*10)+(i+2)*100;	// + (i+2)*100;
		printf("\narray[%d]= %d\n", i, array[i]);
	}
	
	
	
	//selection_sort(array,size_of_array);
	
//	for (i=0 ; i<size_of_array ; i++)
	//{
	//	printf ("%d\t",array[i]);
	//
	//}*/
  //binaryrec_search(array,0,5);
	int arr[]={1,2,10,50,100,104,199,355};
	int size = sizeof (arr);
	//int key = 50;
	linear_Search(arr,50,size );
	//linearrec_search(arr, 1000, 0 ,size);
	//binary_search2(arr,53,size);
	//binary_Search1(arr, 50,6);*/
	binaryrec_search(arr,0,7,355);
}
