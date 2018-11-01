#include<stdio.h>
int main()

{
	int c=0, d=0;
	char string[]="niladri";
	printf("\n %s",string);
	
	
	printf("\n\t");
	while(c!=8)
	{
		printf("%c",string[c]);
		c++;
	}
	
	
	printf("\n\t\t");
	c=0;
	while(string[c]!='\0')
	{
	
		printf("%c",string[c]);
		c++;
	}
	
	printf("\n\t\t\t");
	c=0;
	char *ptr;
	ptr=string;
	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
	}
	
	printf("\n\t\t\t\t");
	c=0;
	
	char name[2000];
	
	printf("enter the name ");
	scanf("%[^\n]s",name);
	printf("%s",name);
	
	printf("\n\t\t\t\t");
	
	//char name1[20];
	//printf("enter the name ");
	//gets(name1);
	//puts(name1);
	
}
//	printf("hello %s,how are you",name1);
	/*for(c+0; c<=12; c++)
	{
		d=c+1;
		//printf("|%-13.*s|\n",d,string);
		printf("%13.*s",d,string);
		printf("\n");
	}
	//printf("---------\n");
	for(c=12; c>=0; c--)
	{
		d=c+1;
		//printf("|%-12.*s|\n",d,string);
		printf("%13.*s",d,string);
		printf("\n");
	}
	printf("----------\n");*/

