#include<stdio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int binary_decimal(long int num)
{
	
	long int rem, sum=0, power=0;
	while(num>0)
	{
		rem = num %10;
		num = num/10;
		sum = sum +rem * pow(2,power);
		power++;
	}
	
 return sum;
}

int decimal_binary(int numb)
{
	int rem,n, i=1, binary=0;
	while(n!=0)
	{
		rem = n%2;
		n= n/2;
		binary = binary + rem * i;
		i=i*10;
	}
	return binary;
}

 int main()
 {
 	long int numb,convnumb;
 	long long int size ;
 	int i,j;
 	
 	 
 	 printf("enter the number in decimal\t\t");
 	 scanf("%d",&numb);
 	 
 	 size = decimal_binary(numb);
 	 
 	 //printf("enter the position for inverted\t");
 	 //scanf("%d",&j);
 	 
 	 while (size>0)
 	 {
 	 	 
	  }
 	 
}
