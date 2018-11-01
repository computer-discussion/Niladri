#include<stdio.h>
#include<math.h>

int armstrongnumber (int); 
int rev (int);
int factorial (int);

int main()
{
	int numb1,save1,numb2,save2,numb3, save3,palindrom,temp1,save4=0,krishnamurti,temp2,save5,save6;
	
	printf ("\n enter the numb for armstrong =  \t");
	scanf ("%d",& numb1);
	
	printf ("\n enter the numb for reverse =    \t");
	scanf ("%d",& numb2);
	
	printf ("\n enter the numb for factorial =   \t");
	scanf ("%d",& numb3);
	
	save1 = armstrongnumber (numb1);
	save2 = rev(numb2);
	save3 = factorial(numb3);
	
	printf ("\n\n\n enter the krishnamurti number =   \t");
	scanf ("%d",& krishnamurti);
	temp1 = krishnamurti;
	
	while (temp1!=0)
	{
	 save6 = temp1%10;
	 save4 = save4 + factorial (save6);
	 temp1 = temp1 / 10;
    }
	
	if(save4 == krishnamurti)
	printf("\n\n This is a krishnamurti number ");
	
	else
	printf("\n\n This is not a krishnamurti number ");
	
	printf ("\n\n\n enter the palindrom number =   \t");
	scanf ("%d",& palindrom);
	temp2 = palindrom;
	save5 = rev (temp2);
	
	if(save5 == palindrom)
	printf("\n\n This is a palindrom number ");
	
	else
	printf("\n\n This is not a palindrom number ");
}


int armstrongnumber (int numb) 
{
	int temp, sum=0, rem;
	
	temp = numb;
	while (temp>0)
	{
		rem = temp % 10;
		sum = sum + pow (rem,3);
		temp = temp/10;
	}
	if(numb == sum)
	printf ("\n\n Armstrong Number");
	else
	printf ("\n\n Not a armstrong number");
}

int rev (int numb)
{
	int temp,reminder,reverse;
	
	while (numb!=0)
	{
		reminder = numb % 10;
		temp = temp * 10 + reminder;
		numb/=10;
	}
	
	printf(" \n\n the reversed number is  %d", temp);
	 return temp;
}

int factorial (int k)
{
  int j=1;
     	while (k!=0)            
      {  
		j=j*k;
		k--;
	  }
		      
	printf("\n\n the factorial number is  %d", j);   

	return j;       
}

