#include<stdio.h>

void main()
{
	int positive=0,negative=0,zero=0;
    long int i; // long long int is considered as unsigned int....negative numbers is also enrolled as positive... 
	char option;
	
	do
	{
		
	    printf("\n\t push the number--> \t");
		scanf("%d", &i);
		
		if(i==0)
		{
			zero++;
		}
		else if(i<0)
		{
			negative++;
		}
		else
		{
			positive++;
		}
		
		printf("\n\n do you want to continue then press y || Y if not press any kye without y&&Y \n");
	    scanf ("%c", &option); 
	    
	} while(option =='y' || option =='Y');
	
	printf("\n\n\n the whole numbers of positive--> %d ,the whole numbers of negative--> %d ,the whole numbers of zero--> %d \n\n",positive,negative,zero);

}
