#include<stdio.h>
int main()
{
	int i=0,n,j,r,decimal,binary[20],l=1,bin=0;
	printf("please enter a decimal number: \n");
	scanf("%d",&decimal);
	n = decimal;
	while(decimal!=0)
	{
		r=decimal%2;
		bin=bin+(r*l);
		l=l*10;
		decimal=decimal/2;
	}
	printf("\n\t the binary number is::::::%d\n\n",bin);
	
	printf("please enter a decimal number: \n");
	scanf("%d",&decimal);

	while(decimal!=0)
      {
      	r=decimal%2;
      	binary[i]=r;
      	decimal=decimal/2;
      	i++;
		  }	
       printf("\n\n binary number is:::::::");
	    for(j=i-1;j>=0;j--)
		 {
		 	printf("%d",binary[j]);
		 	
		  }	   
		  
	return 0;
}


