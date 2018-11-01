// krisnamurti number //
// palindrome number //

#include<stdio.h>
#include<string.h>
# define size 40


 int fact (int x)
 {
 	int i,j=1;
 	for(i=x; i>=1; i--)
 	{
 		j = j * i;
 		//printf(" %d ",j);
	}
	return j;
 }
 
 int rev (int a)
 {
 	int i,sum,r;
 	while(a > 0)
 	{
 		r = a % 10;
 		sum = sum*10 + r;
 		a = a/10;
	}
	return sum;
 	
 }
 
 char revstring (char* str)
 {
 	int l,i;//c=0;
 	int isPalindrome = 0;
 	
 	l = strlen(str);
 //	printf("%d\n",l);
 	for(i=0; i<l/2; i++)
 	{
 		if(str[i] != str[l-1-i])//start comparison from 1st string to last string.
 		{
		// c++;
 		//printf("%d",c);
 		printf("\n  is not a palindrome \n");
 		isPalindrome = 0;
	    break;
 	    }
		else
		{
			isPalindrome = 1;
		} 
	}
	
	if (isPalindrome == 1)
	{
		printf ("\n is a palindrome");
	}
}

 int main()
 {
 	int numb,r,a,sum=0,j,k;
 	printf("  enter the number \t");
    scanf("%d", &k);
 	 a = k;
 	 
	 while( a>0 )
 	{
 	    r = a % 10;
		sum = sum + fact(r);
		a = a/10;	
	}
	if(sum == k)
	printf("\n ***** it is a krisnamurti number *****\n");
	
	else
	printf("\n ***** it is not a krisnamurti number ***** \n");
	
	
	printf("\n\n\n  enter the number \t");
	scanf("%d", &numb);
	
	
	  j = rev (numb);
	  
	if (j == numb)
	printf("\n\n\n this is the palindrome\n\n\n ");
	
	else
	printf("\n\n\n this is not the palindrome\n\n\n ");
	
	char s[size];
	
	printf("\n\n\n  enter the string \t");
	scanf("%s",&s);
	
     revstring (s);	
     
     printf(" \n######  the end  ######");
 }


