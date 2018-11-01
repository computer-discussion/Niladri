 #include <stdio.h>
 #include<stdlib.h>
 int main()
 {
 	char*arr1;
 	char*arr2;
 	int i,j=0,string1,string2;
 	
 	printf("enter the number of letters::::::\n\n");
 	scanf(" %s ",& string1);
 	
 	arr1=(char*) malloc (string1 * sizeof (char) );
 	
 	
 	printf(" enter the input :::::::\n\n");
 	scanf(" %s ",& arr1);
 	
 	printf(" enter the number of letters::::::::\n\n");
 	scanf(" %s ",& string2);
 	
 	arr2=(char*) malloc (string2* sizeof (char));
 	
 	
 	printf(" enter the input ::::::\n\n");
 	scanf(" %s ",&arr2);
 	
 	
	    for( i = 0; arr1 != '\0';i++)
	    {
	    	arr1=' ';
	    	i++;
		}
		for(j=0; arr2 != '\0';j++)
		{
			arr2 [i]= arr2 [j];
			i++;
			
		}
 	    arr1[i]='\0';
 	    printf(" %d \n",arr1);
    
 } 
	
	  
 
