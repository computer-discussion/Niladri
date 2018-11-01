#include<stdio.h>
// returntype function_name (arguments);
// ::: takes nothing returns nothing ::://
  void add();
  void evenodd();

 void add()
{
	int a,b,c;
	printf(" enter the number\t");
	scanf("%d %d",&a,&b);
	c= a+b;
	printf("sum is %d\n",c);
}

 void evenodd()
{
	int a;
	printf(" \nenter the number\t");// printf() and scanf() are both of same natures (takes something returns something)  
	scanf("%d",&a);
	if(a%2 == 0)
	printf("number is even");
	
	else
	printf("number is odd");
	
}

// ::: takes something returns nothing ::: //

void add (int a, int b) ;// 

int main()
{
	
    add();// call from main()
    evenodd();// call from main()
}
