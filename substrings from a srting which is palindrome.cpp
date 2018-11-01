// this program is valid for minimum 6 to maximam 20 values //

#include <stdio.h>
#include<stdlib.h>

int str_len (char *str)
{
    int l = 0;
    
    for (l=0; str[l]!='\0'; l++)
    {}
    
    return l;
}

palindrome_substrings ( char*str)
{
	int i = str_len(str);
	
}

int main()
{
	char* ms1;
	int size1,i;
	
	printf("\n Enter the size of main string:::: \n\n");
	scanf("%d",& size1);
	ms1=(char*)calloc((size1+1),sizeof (char));
	
    printf("\n Enter the main string::::\n\n");
	scanf("%s",ms1);
	
	i = palindrome_substrings (ms1);
}
