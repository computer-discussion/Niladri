#include<stdio.h>
int fibo (int);

int main()
{
	int i,numb;
	printf("  enter the number \n");
	scanf("%d",& numb);
	
	for(i=0;i<numb;i++)
	{
		printf("\n %d \n",fibo(i));
	}
}


int fibo (int i)
{
	//printf("function = %s LINE = %d | i = %d",__func__,__LINE__,i);
	if(i==0)
	return 0;
	else if (i == 1)
	return 1;
	else
	return (fibo(i-1)+fibo(i-2));
}
