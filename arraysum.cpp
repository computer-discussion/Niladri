#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[50],i,n,a,sum;
	printf("enter the entries in array\n");
	scanf("%d",&n);
	
	printf("enter the values in array\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		//arr[i]=0;
	}
	sum = 0;
	
	for(i=0;i<n;i++)
	{
		sum = sum + arr[i];
		//return 0;
	}
	
		for(i=0;i<n;i++)
		{ 
			printf("\n a[%d]=%d",i,arr[i]);
		}
	   printf("\n sum = %d ", sum);
	 return(0);
}
