#include<stdio.h>
int main()
{
	int d1,d2,d3,m,m1,s,n;
	
	printf(" Enter any 3 digit number \t");
	scanf("%d",& n);
	
	d1 = n % 10;
	//printf("\n %d",d1);
	m = n/10;
	//printf("\n %d",m);
	d2 = m % 10;
	//printf("\n %d",d2);
	m1 = m/10;
	//printf("\n %d",m1);
	d3 = m1;
	//printf("\n %d",d3);

	
	s = d1 + d2 + d3;
	
	printf("\n sum of all digits = %d ",  s);
}
