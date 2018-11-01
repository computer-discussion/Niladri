#include<stdio.h>
int main()
{
	int i,j,z;
	printf("enter the row number:::::\t");
	scanf("%d",&z);
	
	
	for(i=1;i<=z;i++)
	{
		for(j=1;j<=z+z-1;j++)
		{
			if(j>=(z+1)-i && j<=(z-1)+i)
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

	
	
	for(i=1;i<=z;i++)
	{
		for(j=1;j<=z+z-1;j++)
		{
			if(j>=i && j<=(z+z)-i)
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
}


