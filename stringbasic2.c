#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define FOUND 1
#define NOTFOUND 0
void main()
{
	char masterlist[6][10]={
		                    "niladri",
		                    "rakhi",
		                    "biswanath",
		                    "monika",
		                    "tunda",
		                    "sohan"
		                    
	                             };
	char*names[]={
		                    "niladri",
		                    "rakhi",
		                    "biswanath",
		                    "monika",
		                    "tunda",
		                    "sohan"
		                    
	                             };                             
	int i,flag,a,j;
	char yourname[10];
	char t;
	char* temp;
	
	printf("\n enter your name\n");
	scanf("%s", yourname);
	
	flag=NOTFOUND;
	for(i=0;i<=5;i++)
	{
		a=strcmp (&masterlist[i][0],yourname);
		if(a==0)
		{
			printf("welcome , you can enter the palace");
			flag=FOUND;
			break;
		}
    }
    if(flag==NOTFOUND)
    printf("sorry,you are a trespasser");
    
    printf("\n\n\n");
    
    
    printf("\n original : %s %s", &masterlist[2][0],&masterlist[3][0]);
    
    for(i=0;i<=9;i++)
    {
    	t=masterlist[2][i];
    	masterlist[2][i]=masterlist[3][i];
    	masterlist[3][i]=t;
	}
	printf("\n new :%s %s",&masterlist[2][0],&masterlist[3][0]);
	
	printf("\n\n\n");
	
	
	printf("\noriginal: %s %s",names[0],names[1]);
	temp=names[0];
	names[0]=names[1];
	names[1]=temp;
	printf("\n new ::%s %s ",names[0],names[1]);
	
	
	char* name[6];
	char k[50];
	int len,g;
	char* p;
	for(i=0; i<=5; i++)
	{
		printf("\n enter name::\t");
		scanf("%s",k);
		len=strlen(k);
		p = (char*) malloc (len+1);
		strcpy(p,k);
		name[g]=p;
		}
		
		for(i=0; i<=5; i++)
		{
			printf("\n%s",name[g]);
		}
}

