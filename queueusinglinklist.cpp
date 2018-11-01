/*Queue using linked list header file "linkedlist.h"
insert = addLast
extract = delFirst
element display = show
peep= search the element in queue
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

void addlast()
{
	struct node*temp,*t;
	temp = createnewnode();
	printf("enter the new number:::::::\t");
	scanf("%d",&temp->info);
	temp->link = NULL;
	if(START == NULL)
	{
		START = temp;
	}
	else
	{
		t= START;
		while(t->link!= NULL)
	    {
	      t=t->link;	
		}
		t->link=temp;
	}
	
}
void delfrist()
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
void show()
{
	struct node*l;
	if(START==NULL)
	{
		printf("list is empty:::");
	}
	else
	{
		l=START;
		while(l->link!= NULL)
		{
			
			printf("this is the list %d",l->info);
			l=l->link;
			
			
		}
	}
}
void search()
{
	
	struct node* k; int numb;
	k= START;
	printf("enter the number what you want to search in queue::::\t");
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
			printf("\n number is in the queue::::\t%d", numb);
			return;
			}
			
			else
			{
				k=k->link;
				//printf("\n number not found in queue \n");
			}
		}
	}
}

void insert()
{
	addlast();
}
void extract()
{
	delfrist();
}
void display()
{
	show();
}
void peep()
{
	search();
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
	printf("\nTHIS IS MY FRIST QUEUE HOPE YOU LIKE IT");
    printf ("\n------------Welcome to stack------------\n\n");
	
	while(1)
	{
		
		printf ("\n\nMENU\n\n");
		printf ("type 1 for insert\n\nType 2 for extract\n\nType 3 for display\n\ntype 4 to peep \n\n\n");
	
		printf ("Enter the option : ");
		scanf ("%d",&option);
	
		printf ("\n\n");
		
			switch (option)
		{
			case 1:
		      insert();
		      break;
		case 2:
		    extract();
		    break;
		case 3:
		    display();
		    break;
		case 4:
			peep();
			break;
		case 5:
				{
					printf ("-----------The program Ends here-----------\n\n\n");
					
					break;
				}
		
			default : 
				{
					printf ("Invalid Option!\n\n");
					break;
				}
		
			
		}
	}
		printf("\n\n thanq for useing my program");
	}

