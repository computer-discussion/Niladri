// program to demonstrate printing of a string//
// easy to understand string//
#include<stdio.h>

#include<string.h>// for string library//

 int main()
 {
 	char name []= "niladri";
 	int i =0 ;
 	
 	char *ptr ;// using pointer
 	ptr = name ;// store the base address of string//
 	
 	char name1 [25];//another way of declaration in string//
 	char name2 [25];
 	
 	
 	
 	while (name[i]!= '\0')   // while(i <= 7)
 	{
 		printf("%c", name[i]);// name[i]//*(name + i)//*(i + name)//i[name] these are same notation,,
 		i++;
 	
	}
		printf("\n\t");
	while( *ptr != '\0')
	{
		printf("%c",*ptr);// we can also use %s instead of %c
		ptr++;
		
	}
	
	printf(" enter the name2:::::");
	gets ( name2);
	puts ("hello!!!!");
	puts (name2);
	
	
 	printf("enter the name:::::::\n");
 	scanf("%s", name1);
 	printf( " RAKHI %s RAKHI", name1);// ANOTHER print ant scan mixed play for fun..
 	
 	
 	char arr [] = "wonderwoman";
 	int len1,len2;
 	len1 = strlen (arr);
 	len2 = strlen ("niladriloveswonderwoman");//strlen is used to calculate string length//
 	printf("\nstring = %s length = %d", arr,len1);
 	printf("\nstring = %s length = %d" ,"niladriloveswonderwoman",len2);
 	
 	
 	
	}
