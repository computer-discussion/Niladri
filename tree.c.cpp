#include<stdio.h>
int main()
{
	
	int i, j ,k;
	
	for (i=1; i<=7; i++)
	{
		for(j=1; j<=36;j++)
		{
			if( j>=26-i &&j<=24+i||j>=11-i && j<=9+i )
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}  
	
	
	
	for (i=1; i<=2; i++)
	{
		for(j=0; j<=35; j++)
		{
			if(j>=8 && j<=10 || j>=23 && j<=25 )
			printf("*");
			
			else
			printf(" ");
		}
		printf("\n");
	}
	for (i=1; i<=2; i++)
	{
		for(j=0; j<=35; j++)
		{
			if(j>=10 && j<=12 || j>=25 && j<=27 )
			printf("*");
			
			else
			printf(" ");
		}
		printf("\n");
	}
	
	for (i=7; i>=1; i--)
	{
		for(j=36; j>=1;j--)
		{
			if( j>=26-i &&j<=24+i||j>=11-i && j<=9+i )
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}  
	
	printf("********* HAPPY NEW YEAR **********");
	printf("\n       ADVANCED WISH KORLAM    \n              2-0-1-8 ");
}
