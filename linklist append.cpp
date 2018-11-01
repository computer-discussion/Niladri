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

void insertlastnode()
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
	struct node*l;
	if(START==NULL)
	{
		printf("list is empty:::");
	}
	else
	{
		l=START;
		while(l!= NULL)
		{
			
			printf("\n\n %d\n",l->info);
			l=l->link;
		}
	}
}

void search()
{
	
	struct node* k; int numb;
	k= START;
	printf("enter the number what you want to search::::\t");
	scanf("%d",& numb);
	
	if(START==NULL)
	{
		printf("list is empty");
	}
	else
	{
		while(k != NULL)
		{
			if(k->info==numb)
			{
			printf("\n\n search is successful::::\t%d \n\n", numb);
			return;
			}
			
			else 
			{
				k=k->link;
				
			}
			
		}
		printf("\n\n NUMBER IS NOT IN THE LIST \n\n");
	}
   }
   
   
void reverse()
{
	struct node* prev = NULL;
	struct node* current = START;
	struct node*next;
	struct node*temp;
	
	while(current != NULL)
	{
		next = current -> link;
		current->link = prev;
		prev = current;
		current = next;
	}
	START = prev;
	
	temp = START;
	
		if(START==NULL)
	{
		printf("list is empty:::");
	}
	else
	{
		
		while(temp!= NULL)
		{
			
			printf("\n\n %d\n",temp->info);
			temp=temp->link;
		}
			
	
	
	
}
}



int menu()
{
	int ch;
	printf("\n1. ADD THE VALUE TO THE last position AT LIST::::\t");
	printf("\n2. DELETE THE FIRST VALUE:::::\t");
	printf("\n3. VIEW LIST:::::\t");
	printf("\n4. search the number:::\t");
	printf("\n5. list reverse:::::\t");
	printf("\n6. exit");
	printf("\n\n\n enter your choice:::::\t");
	scanf("%d",&ch);
	return(ch);
}


int main()
{
	
	while(1)
	{
	
	switch (menu())
	{
		case 1:
		      insertlastnode();
		      break;
		case 2:
		    deletefirstnode();
		    break;
		case 3:
		    viewlist();
		    break;
		case 4:
			search();
			break;
		case 5:
			reverse();
			break;
		case 6:
		    exit(0);    
		default:
			printf("invalid");
	}
    }
}

