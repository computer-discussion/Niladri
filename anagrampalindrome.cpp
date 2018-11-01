#include<stdio.h>
#include<stdlib.h>
#define SIZE 128

int a [SIZE];

int main()
{
	char input[]="myyklm";
	int i=0,index=0;
	
	while(input[index]!='\0')
	{
		a[input[index++]]++;
	}
	while(index<SIZE)
	{
		if(a[index++]%2)
		{
			i++;
		}
	}
	if(i<2)
	{
		printf("\n yes \n");
	}
	else
	{
		printf("\n no \n");
	}
}

