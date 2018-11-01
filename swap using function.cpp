#include<stdio.h>
void swap2 (int*x , int*b);
int main()
{
	int x=5,y=6;//actual variable
	//swap1(x,y);
	//printf("%d %d", x,y);
	swap2(&x,&y);
	printf("%d  %d",x,y);
}

    /*int swap1 (int a, int b)   
     
     { 
       int t;
       t = a;
       a= b;
       b= t;
      printf("%d %d \n\n\n", a , b);
	 }*/
	
    void swap2(int* a, int* b)
    {
    	int t;
    	t = * a;
    	*a = *b;
    	*b =t;
    	printf("%d %d\n\n\n",a,b);
	}

