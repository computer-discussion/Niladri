#include<stdio.h>
#include<stdlib.h>
int main()
{
	int row,col,l,m;
	int **mat, **tr;
	printf(" enter the row number of the matrix::::\n");
	scanf("%d",&row);
	printf(" enter the column number of the matrix:::::\n");
	scanf("%d",&col);
	
	printf("\n\n\n");
	
	mat=(int**) malloc(sizeof(int*)*row);
	for(l=0; l<row; l++)
	{
		mat[l]=(int*) malloc (sizeof(int)*col);
		
	}
	tr = (int**) malloc (sizeof(int*)*row);
	for(l=0; l<row; l++)
	{
		tr[l]=(int*) malloc (sizeof(int)*col);
	}
	
	for(l=0; l<row; l++)
	{
		for(m=0; m<col; m++)
		{
			printf(" enter the row %d column%d value:",(l+1),(m+1));
			scanf("%d",& mat[l][m]);
		}
		
	}
	printf("the matrix is :\n\n");
	for(l=0;l<row;l++)
	{
		for(m=0;m<col;m++)	
		{
			printf("%d\t",mat[l][m]);
		}
		printf("\n");
		}
   
    
    for(l=0; l<row; l++)
    {
    	for(m=0; m<col; m++)
    	{
    		tr[l][m]=mat[m][l];
		}
	}
   printf("the transposed matrix is :::::\n\n");
   
   for(l=0; l<row; l++)
   {
   	for(m=0; m<col;m++)
   	{
   		printf("%d\t",tr[l][m]);
	   }
	   printf("\n");
   }
}
