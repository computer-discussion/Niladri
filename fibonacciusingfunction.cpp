   #include<stdio.h>
   #include<stdlib.h>

   int fibonacci_rec(int n)
   {
   	int k;
   	if(n==0)
   	return 0;
   	
   	else if(n==1)
   	return 1 ;
   	
   
   	else 
   	return (fibonacci_rec(n-1)+fibonacci_rec(n-2));
   }
   
         int main()
		 {  
		 	int n,l,i,k,size,fst,scnd;
		 	int* arr;
		 	printf(" enter the string length --->\t");
        	scanf("%d",& size);
	
	         arr = (int*) calloc (sizeof (int)  , size);
	
            
	

		 	printf(" enter the number up to :::::: ");
		 	scanf("%d",& n);
		 	
    printf("\n\n the fibonacci numbers are \n\n\n");
	for(i=0;i<n;i++)
	{
	  printf("\t %d",fibonacci_rec(i));
	}
	  
		for(i=0;i<n;i++)
	{
	  arr[i]=fibonacci_rec(i);
	}
	
	printf("\n\n");
	
	
	printf("\n\n taking fibonacci in a array\n\n\n");
		for(i=0;i<n;i++)
	{
	
	  printf("\t %d",arr[i]);
	}
	
printf("\n\n\n the non fibonacci numbers are \n");
	
	for(i=0;i<n;i++)
	{
	   	fst=arr[i];
		scnd=arr[i+1];
		k=0;
		
	    
	   
	    	for(k=fst+1;k<scnd;k++)
	    	printf("\n %d",k);
	
	
    	printf("\n\t\t %d to  %d",fst,scnd);
		
	
		
	}
		
	}
