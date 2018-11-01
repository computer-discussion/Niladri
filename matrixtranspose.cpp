#include<stdio.h>
#include<stdlib.h>
void transpose (int arr[4][4],int b[4][4] )
{  
    int i,j;
	for ( i=0; i<4; i++)
	  {
	  	for(j=0;j<4; j++)
	  	{
	  		b[i][j] = arr[j][i];
	  		
		}
      }
}
 
int main()
{
	int arr[4][4]={
	                  1,1,1,1,
	                  2,2,2,2,
	                  3,3,3,3,
	                  4,4,4,4,
				  };
	int b[4][4],i,j;
	transpose (arr,b);
	
	  for ( i=0; i<4; i++)
	  {
	  	for(j=0;j<4; j++)
	  	{
	  	
	  		printf(" %d ",b[i][j]);
		}
		printf("\n");
	  }			  
	 return 0;
}
	
