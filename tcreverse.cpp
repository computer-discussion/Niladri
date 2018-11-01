#include<stdio.h>
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int i=0;
	int n=7;
	int j=n-1;
	int temp;
	
	  while(i<j)
	  {
	  	temp=arr[i];
	  	arr[i]=arr[j];
	  	arr[j]=temp;
	  	i++;
	  	j--;
	  }
	  int k=0;
	  for(k=0;k<=n-1;k++)
	  {
	  	printf("%d\t", arr[k]);
	  }
	  return 0;
}
