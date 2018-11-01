#include<stdio.h>
#include<stdlib.h>

//#define size 100

int str_len (int *str)
{

    int len = 0;
    
    for (len=0; str[len]!='\0'; len++)
    {	
	}
    
    return len;

}

int shorting_list(int*arr1,int*arr2)
{
	
	int n1,n2,i =0,j=0,z=0;
	int* arr3;
	n1 = str_len(arr1);
	n2 = str_len(arr2);
	
	arr3 = (int*) calloc (sizeof(int),(n1+n2));
	
	while(i<n1 || j<n2 )//&& z<(n1+n2))
	{
		
		if(arr1[i]<arr2[j])
		{
			arr3[z]=arr1[i];
			
			printf("\n ultimate list --> %d ",arr3[z]);
			
			z++;
			i++;
			
		}
		
		else
		{
			arr3[z]=arr2[j];
			
			printf("\n ultimate list --> %d ",arr3[z]);
			
			z++;
			j++;
					
		}
		//printf("\n ultimate list --> %d \n",arr3[z]);
		
	
	}
	//printf("\n ultimate list --> %d \n",arr3[z]);
		
	
	
	
}


int main()
{
	int arr1[5],arr2[5],i,j;
	
	printf("\n\nenter 5 integer values\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\n\nenter 5 integer values\n");
	for(j=0;j<5;j++)
	{
		scanf("%d",&arr2[j]);
	}
	
	
	shorting_list (arr1,arr2);
	

}
