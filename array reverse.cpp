#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];int arr[5];
	int len,i,j;
	printf("enter the string\n\t");
	scanf("%s",&str);
	
	len = strlen(str);
	printf(" reverced string \n\t");
	
	for(i=len-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	
	printf("\n\n enter the array elements:::\n");
	for(j=1;j<=5;j++)
	{
		scanf("%d",&arr[j]);
	}
	
	printf("\n\n reverce the array elements:::\t");
	
	for(j=5;j>=1;j--)
	{
		printf("\n%d",arr[j]);
	}
}
