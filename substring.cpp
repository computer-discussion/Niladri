#include<stdio.h>
#include<stdlib.h>

int strlen (char *str)
{
    int l = 0;
    
    for (l=0; str[l]!='\0'; l++)
    {}
    
    return l;
}
int substring (char* str,char* s)
{
	int n,m,i,j,k=0;
	
	n =strlen(str);// return the main string size.
	m =strlen(s);
	//k==0;
	for(i=0;i<=n-m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(str[i+j] != s[j])
			break;
			
			
		}
		if(j==m)
		{
		
		//printf("\n\n sub string is in tha main string\n\n");
		printf(" search successful substring occurs at index %d \n",(i+1));
		k++;
		return k;
    	}
	//	return 1;
	}
	return k;
	
	
}
int main()
{
	char* ms1;
	char* ss2;
	int size1,size2,i;
	
	printf("\n Enter the size of main string:::: \n\n");
	scanf("%d",& size1);
	ms1=(char*)calloc((size1+1),sizeof (char));
	
	printf("\n Enter the main string::::\n\n");
	scanf("%s",ms1);
	
	printf("\n Enter the size of sub string:::: \n\n");
	scanf("%d",& size2);
	ss2=(char*)calloc((size2+1),sizeof (char));
	
	printf("\n Enter the sub string::::\n\n");
	scanf("%s",ss2);
	
	i = substring (ms1,ss2);
	if(i==1)
	printf("\n\n..... search successful .....\n\n");
	
	else if(i==0) 
	printf("\n\n..... search is not successful .....\n\n");
	
	else
	printf("\n\n..... error .....\n\n");
}
