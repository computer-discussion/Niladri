#include<stdarg.h>  
#include<stdio.h>

int sum (int arg1, int arg2, ...)
{
	int i;
	int n;
	int sum = arg2;
	 
	va_list x;
	va_start (x,arg2);
	
	//float a = 1234.5678;
	//float b = 12345.560000000000;
	// printf("%c" , & n);
	
	for(i=0;i<arg1-1;i++)
	{
		sum = sum +va_arg(x,int);
	}
	
	va_end(x);
	
	return sum;
}

int main()
{
	//printf("\n ")
	printf("\n 1. (10)= %d",sum(1,10));
	printf("\n 2. (10+20)= %d",sum(2,10,20));
	printf("\n 3. (3+10+20+30)= %d",sum(3,10,20,30));
	printf("\n 4. (4+10+20+30+40)= %d",sum(4,10,20,30,40));
	printf("\n 5. (5+10+20+30+40+50)= %d",sum(5,10,20,30,40,50));
	
}
