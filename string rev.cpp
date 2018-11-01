#include<stdio.h>
#include<stdlib.h>
//with out using #include<string.h>
int strlen (char *str)
{
    int len = 0;
    
    for (len=0; str[len]!='\0'; len++)
    {
    	
	}
    
    return len;
}

int main()
{
	int size,i,temp,n,j;
	char* arr;
	
	printf(" enter the string length --->\t");
	scanf("%d",& size);
	
	arr = (char*) malloc (sizeof (char) * size);
	
	printf("enter the string::::\t\t");
	scanf("%s",arr);
	
	n = strlen(arr);
	
	for(i=0; i<n/2; i++)
	{
		j = n -1 -i;
		temp = arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
	}
	printf("\n\n This is the rev string\n");
	printf("\n\n%s",arr);
	printf("\n\n\nthe end\n");
	
}
