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



void insertfirst()
{
	struct node*temp,*t;
	temp = createnewnode();
	printf("enter the new number:::::::\t");
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
		free(t);
	}
}




void insertlast()
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

void insertbefore()
{
	struct node* k, *temp,*t;
	int numb;
	temp = createnewnode();
	printf("enter the new number:::::::\t");
	scanf("%d",&temp->info);
	k= START;
	printf("enter the number what you want to search::::\t");
	scanf("%d",& numb);
	
	if(k==NULL)
	{
		printf("list is empty");
	}
	else
	{
		while(k->link != NULL)
		{
			if(k->info==numb)
			{
				t = k->link;
				k->link=temp;
				temp->link=t;
				
			}
			else
			{
				k = k->link;
			}
        }
}
}

void insertafter()
{
	struct node* k, *temp,*t;
	int numb;
	temp = createnewnode();
	printf("enter the new number:::::::\t");
	scanf("%d",&temp->info);
	k= START;
	printf("enter the number what you want to search::::\t");
	scanf("%d",& numb);
	
	if(k==NULL)
	{
		printf("list is empty");
	}
	else
	{
		while(k->link != NULL)
		{
			if(k->info==numb)
			{
		         		  
			}
			else
			{
				k = k->link;
			}
		}
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
		while(l->link!= NULL)
		{
			
			printf("this is the list %d",l->info);
			l=l->link;
			
			if (l!=NULL)
			{
				printf("-->");
			}
		}
	}
}

void search()
{
	
	struct node* k; int numb;
	k= START;
	printf("enter the number what you want to search::::\t");
	scanf("%d",& numb);
	
	if(k==NULL)
	{
		printf("list is empty");
	}
	else
	{
		while(k->link != NULL)
		{
			if(k->info==numb)
			{
			printf("\nsearch is successful::::\t%d", numb);
			return;
			}
			
			else
			{
				k=k->link;
				printf("\n unsuccessful search \n");
			}
		}
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
		
		while(temp->link!= NULL)
		{
			
			printf("this is the list %d",temp->info);
			temp=temp->link;
		}
			
	
	
	
}
}


int menu()
{
	int ch;
	printf("\n1. ADD THE VALUE TO THE LIST::::\t");
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
		      insertlast();
		      break;
		case 2:
		    deletenode();
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

