#include<stdio.h>
int main()
{
	int i,j,k,numb=0;
	 for (i=1;i<=5;i++)
	 {
	 	for(j=1;j<=i;j++)
	 	{
	 		numb++;
	 		//printf(" %d ",numb);
	 		
		 }
		 //printf("\n");
		 
	if(i % 2 == 0)
		 {
		 	for(i=5;i>=1;i--)
		 	{
		 		for (j=i;j>=1;j--)
		 		{
		 			numb++;
		 			printf(" %d ",numb);
		 	        
				 }
				  printf("\n");
			 }
			 
		 	 
		 }
			 	 
		 else
		 {
		 	printf(" %d ",numb);
		 	printf("\n");
		 }
	 }
}
