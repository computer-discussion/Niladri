/*Stack using linked list
push = insertfirst,
pop =  deletefirstnode,
peep = search,
element display = viewlist,
*/
#include <stdio.h>
#include<stdlib.h>

struct node
{
   int info;
   struct node* link;	
};

struct node* START = NULL;

struct node* createnewnode()
{
	struct node*n;
	n=(struct node*)malloc(sizeof (struct node));
	return (n);
}

void insertfirstnode()
{
	struct node*temp,*t;
	temp = createnewnode();
	printf("enter the new number to push in stack:::::::\t");
	scanf("%d",&temp->info);
	if(START == NULL)
	{
		START = temp;
	}
	else
	{
		t = START;
		START = temp;
		temp->link = t;
		//free(t);
	}
}

void deletefirstnode()
{
	struct node*r;
	if(START==NULL)
	{
		printf("list is empty:::");
	}
	else{
	
	r=START;
	START = START->link;
	free(r); 
       }
}
void viewlist()
{
	struct node*temp;
	
	if(START == NULL)
	{
		printf(":::::list is empty:::::");
	}
	else
	{
		temp = START;
		
		while(temp != NULL)
		{
			
			printf("\n the elements of  the list===== %d \n",temp->info);
			temp=temp->link;
			
			
		}
	}
}
void search()
{
	
	struct node* k; 
	int numb;
	int flag = 0;
	k= START;
	printf("enter the number what you want to search in stack::::\t");
	scanf("%d",& numb);
	
	if(k==NULL)
	{
		printf("list is empty");
	}
	else
	{
		while(k != NULL)
		{
			if(k->info==numb)
			{
			printf("\n number is in the stack::::\t%d", k->info);
			flag = 1;
			return;
			}
			
			else
			{
				k=k->link;
				//printf("\n number not found in stack \n");
			}
		}
		if(flag == 0)
	    {
	    	printf("\n number is not in the stack \n");
		}
	}
}
   
void push()
{
	
	insertfirstnode();
	printf ("\n number is pushed into the stack !\n\n");
			
}

void pop ()
{
	deletefirstnode();
	printf ("\n number is poped from the stack !\n\n");
}

void peep()
{
	search();
}

void view()
{
	viewlist();
	printf(" \n\n here is all elements of stack \n\n");
}

int main()
{
	int i, j ,k,option,n;
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
	
	printf("********   ************  **********");
	printf("\n$ $ $ $    HELLO USER   $$$$$$");
	printf("\nTHIS IS MY FRIST STACK HOPE YOU LIKE IT");
    printf ("\n------------Welcome to stack------------\n\n");
	
	while(1)
	{
		
		printf ("\n\nMENU\n\n");
		printf ("type 1 for push\n\nType 2 for pop\n\nType 3 for peep\n\ntype 4 to view all the Stack elements\n\n\n");
	
		printf ("Enter the option : ");
		scanf ("%d",&option);
	
		printf ("\n\n");
		
			switch (option)
		{
		case 1:
		      push();
		      break;
	   	case 2:
		    pop();
		    break;
	   	case 3:
		    peep();
		    break;
		case 4:
			view();
			break;
		case 5:
				printf ("-----------The program Ends here-----------\n\n\n");
				break;
		
			default : 
				   printf ("Invalid Option!\n\n");
				
		
			
		}
	}
		printf("\n\n thanq for useing my program");
	}

