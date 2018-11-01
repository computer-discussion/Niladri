#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* string_append(char*a , char*b)
{
	char *c;
	int d,i;
	int len_s1, len_s2;
	len_s1= strlen(a);
	len_s2= strlen(b);
	c = (char*) malloc (sizeof (char)*(len_s1 + len_s2 + 1) );
	c [len_s1 + len_s2] = '\0';
	//d= strlen(a) + strlen(b)+1;
	for(i=0;i<strlen(a);i++)
	{
	   c[i]=a[i];
	   i++;	
	}
	for(i=0;i<strlen(b);i++)
	{
	   c[len_s1 + i] = b[i];
        i++;	
	}
//	c[d] = '/0';
	return(c);
}
int main()
{
	int i, j ,k;
	for (i=1; i<=7; i++)
	{
		for(j=1; j<=36;j++)
		{
			if(j>=11-i && j<=9+i || j>=26-i &&j<=24+i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}  
	
	
	
	for (i=1; i<=2; i++)
	{
		for(j=0; j<=36; j++)
		{
			if(j>=8 && j<=10 || j>=23 && j<=25 )
			printf("*");
			
			else
			printf(" ");
		}
		printf("\n");
	}
	printf("********* ************** *********");

	char s1[100],s2[100],arr[100],ice,jio,numb,sum;
	char * s3;
	   /*printf(" Enter the number of entries in array \n");
	   scanf("%d", &numb);
	   
       printf(" Enter the values in array \n");
       for(ice=0;ice<numb;ice++)
       {
       	  scanf("%d", & arr[ice]);
	   }
	   
	   sum = 0;
	   for(ice=0;ice<numb;ice++)
       {
       	 sum  = sum + arr[ice];
       }
       printf("\n sum = %d ", sum);*/
       
       printf(" \n Enter the 1st string::::::\n\t");
       scanf("%s",s1);
       
       printf(" \n Enter the 2st string::::::\n\t");
       scanf("%s",s2);
      
      s3 = string_append(s1,s2);
      
	  printf("\n %s loves  %s",s1,s2,s3); 
	  printf("\n     <<<forever>>>");
      printf("\n********* ************** *********");     
}
