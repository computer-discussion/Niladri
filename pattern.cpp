#include<stdio.h>

int main()

{
    int i,j;
  	for(i=1;i<=13;i++)
	{
	  for(j=1;j<=19;j++)
		{
			while(i!=4)
			{
				if((j>=4-i && j<=7+i) || (j>=13-i && j<=16+i))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			while(i>4)
			{
			
			if(j>=i && j<=19-i)
	        {
			
			printf("*");
			
	    	}	
		
		
		else
		{
			printf(" ");
			
		}
	}
		
		}
		printf("\n");
	}
	return 0;
}
