#include<stdio.h>
void main()
{

	int i, j ,k,z;
	
	for (i=1; i<=7; i++)
	{
		for(j=1; j<=36;j++)
		{
			if( j>=26-i &&j<=24+i||j>=11-i && j<=9+i )
			{
				printf("R");
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
			printf("N");
			
			else
			printf(" ");
		}
		printf("\n");
	}
	
	
	
	/*for(i=1;i<=8;i++)
	{
		for(j=1;j<=15;j++)
		{
		  
			if(j<i)
			printf("W");
			
			else
			printf(" ");
			//else if (j>i)
			//printf("L");
		}
		printf("\n");
	}*/
	
	for(i=1;i<=15;i++)
	{
		for(j=1;j<=15+15-1;j++)
		{
			if(j>=4+i && j<=(15+15)-i)
			{
				printf("P");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	
for ( i=10/2 ; i<=10 ; i+=2)
	 {
	 	for(j=1; j<10-i; j=j+2)
	 	{
	 		printf(" ");
		 }
		 for(j=1; j<=i; j++)
		 {
		 	printf("N");
		 }
		 
		for(j=1; j<=10-i; j++)
		 {
		 	printf(" ");
		 }
		 for(j=1; j<=i; j++)
		 {
		 	printf("N");
		 }
		 printf("\n");
	 }
	 for(i=10; i>=1; i--)
	 {
	 	for(j=i; j<10; j++)
	 	{
	 		printf(" ");
		 }
		 for(j=1; j<=(i*2)-1; j++)
		 {
		 	printf("R");
		 }
		 printf("\n");
	 }
	 
	 
	 printf("  Now my heart depicts the story ");
	 
		  for(i=1;i<=20;i++)
	{
		for(j=1;j<=20+20-1;j++)
		{
			if(j>=(20+5)-i && j<=(20-11)+i)
			{
				printf("F");
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
		for(j=0; j<=36; j++)
		{
			if(j>=8 && j<=10 || j>=23 && j<=25 )
			printf("R");
			
			else
			printf(" ");
		}
		printf("\n");
	}
	
	for (i=7; i>=1; i--)
	{
		for(j=36; j>=1;j--)
		{
			if( j>=27-i &&j<=25+i||j>=13-i && j<=11+i )
			{
				printf("N");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}  
	
}
