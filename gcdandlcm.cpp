#include<stdio.h>

int lcm_recursion (int n1,int n2)
{
	static int flag =1;
	if(flag % n1 == 0 && flag % n2 ==0)
	{
		return flag;
	}
	flag ++;
	lcm_recursion (n1,n2);
	return flag;
}
int gcd_recursion (int n1, int n2)
{
	if(n1==0)
	return n2;
	
	return gcd_recursion(n2%n1,n1);
}

int lcm_result (int n1,int n2)
{
	int gcd,lcm,x,y;
	x=n1;
	y=n2;
	while(n1!=n2)
	{
		if(n1<n2)
		n2=n2-n1;
		
		else
		n1=n1-n2;
	}
	gcd = n1;
	printf("\n gcd_normal = %d\n",gcd);
	
	lcm = (x*y)/gcd;
	return lcm;
	
}

int hcf_result (int n1 , int n2)
{
	int low,i,hcf;
	
	if(n1<n2) low=n1;
	
	else  low=n2;
	
	for (i=1;i<=low;i++)
	{
		if(n1%i==0 && n2%i==0)
		  hcf = i;
		   
	}
	return hcf; 
	
}

int main()
{
	int n1,n2,n3,n4,n5,n6;
	printf(" put the numbers  \n");
	scanf("%d %d",&n1,&n2);
	
	n3= lcm_result(n1,n2);
	printf("\n the lcm = %d",n3);
	
	n4= lcm_recursion(n1,n2);
    printf("\n the lcm_recursion is  = %d",n4);	
    
    n5 = gcd_recursion (n1,n2);
    printf("\n the gcd_recursion is = %d",n5);
    
    n6 = hcf_result (n1 , n2);
    printf("\n the hcf_result is = %d",n6);
	
}
