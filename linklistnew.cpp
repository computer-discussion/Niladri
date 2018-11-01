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

void insertnode()
{
	struct node*temp,*t;
	temp = createnewnode();
	printf("enter the new number:::::::\t");
	scanf("%d",&temp->info);
	temp->link = NULL;
	if(START ==  NULL)
	{
		START = temp;
	}
	else
	{
		t= START;
		while(t->link != NULL)
	    {
	      t=t->link;	
		}
		t->link=temp;
	}
	
}

void deletenode()
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
		printf("link is empty");
	}
	else
	{
		l=START;
		  while(l!=NULL)
		
		{
			printf("this is the list ::::::%d",l->info);
			l=l->link;
			if (l!=NULL)
			{
				printf("-->");
			}
		}
	}
}

void search ()
{
	struct node*k;int numb;
	k= START;
	printf("enter the value:::\t");
	scanf("%d",numb);
	if(k ==  NULL)
	{
		printf("link is empty");
	}
	else
	{
	
	while(k->link!=NULL)
	{
		if(k->info == numb)
		{
			printf("Successfull search ::::::\t%d",numb);
		}
		else
		{
			k=k->link;
			printf("unsuccessfull search");
		}
	}
}
	
}


int menu()
{
	int ch;
	printf("\n1. ADD THE VALUE TO THE LIST::::\t");
	printf("\n2. DELETE THE FIRST VALUE:::::\t");
	printf("\n3. VIEW LIST:::::\t");
	printf("\n4. search the value\t");
	printf("\n5. exit");
	
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
		      insertnode();
		      break;
		case 2:
		    deletenode();
		    break;
		case 3:
		    viewlist();
		    break;
		case 4:
		    search();    
		case 5:
		    exit(0);
		default:
			printf("invalid");
	}
    }
}

