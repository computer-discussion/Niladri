#include<stdio.h>  
#include<stdlib.h>

struct node
{

	char name[40];
	int roll;
	char sec[5];
	char stream[20];
	
	struct node* link;
};

struct node* START = NULL;

struct node* createnode()
{
	struct node*n;
	n=(struct node*)malloc(sizeof (struct node));
	return(n);
	
}
/*void insertfirstnode()
{
	struct node*temp,*t;
	temp = createnode();
	printf("enter student name:::::::::\t\n");
	scanf("%s",&temp->name);
	
	printf("\nenter roll no.\t\n");
	scanf("%d",&temp->roll);
	
	printf("\nenter sec:::\t\n");
	scanf("%s",&temp->sec);
	
    printf("\nenter the stream\t\n");
	scanf("%s",&temp->stream);
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
}*/

void insertlastnode()
{
	struct node*temp,*t;
	temp=createnode();
	
	printf("enter student name:::::::::\t\n");
	scanf("%s",&temp->name);
	
	printf("\nenter roll no.\t\n");
	scanf("%d",&temp->roll);
	
	printf("\nenter sec:::\t\n");
	scanf("%s",&temp->sec);
	
 printf("\nenter the stream\t\n");
	scanf("%s",&temp->stream);
	
	temp->link = NULL;
	if(START == NULL)
	{
		START=temp;
	}
	else
	{
		t=START;
		while(t->link != NULL)
		{
			t=t->link;
			//t->link = temp;
		}
		t->link = temp;
	}
}


void deletefirstnode()
{
	struct node*r;
	if(START == NULL)
	{
		printf("\n:::::list is empty:::::\n");
	}
	else
	{
		r=START;
		START=START->link;
		free(r);
	}
}
/*void deletelastnode()
{
	struct node*t,*r;
	t = START;
	if(START == NULL)
	{
		printf("\n:::::list is empty:::::\n");
	}
	else
	{
		while(t==NULL)
		{
		  t = t->link;
		}
		r = t->link;
		t->link=NULL;
		free(r);
	}
}*/

void viewlist()
{
	struct node*temp;
	temp = START;
	if(START == NULL)
	{
		printf(":::::list is empty:::::");
	}
	else
	{
		while(temp != NULL)
		{
			printf("the name of student\t %s\n", temp->name);
			printf("the roll of student\t %d\n", temp->roll);
			printf("the sec of student\t %s\n", temp->sec);
			printf("the stream of student\t %s\n", temp->stream);
			
			temp = temp -> link;
			
		}
	}
}

void search()
{
	
	struct node* temp; 
	int studentroll;
	int flag = 0;
    
	temp = START;
	
	printf("enter roll no.\t");
	scanf("%d",&studentroll);
	
	
	if(temp == NULL)
	{
		printf(":::::list is empty:::::");
	}
	else
	{
		while (temp != NULL)
		{
		
		if(temp->roll == studentroll )
		{
		
		printf(" \n student roll--> \t%d \n", temp->roll);
		printf(" \n student name--> \t%s \n", temp->name);
		printf(" \n student sec--> \t%s \n", temp->sec);
		printf(" \n student stream--> \t%s \n", temp->stream);
		flag = 1;
		return;
	    }
	    
	    else
	    {
	    	temp = temp->link;
		}
	}
	if(flag == 0)
	    {
	    	printf("\n <<<<< this roll number is not exist >>>>> \n");
		}
 }
}


void reverse()
{
	struct node* prev = NULL;
	struct node* current = START;
	struct node* next;
	struct node*temp;
	
	while(current != NULL)
	{
		next = current->link;
		current->link=prev;
		prev=current;
		current=next;
	}
	START= prev;
	
	temp=START;
	
	if(START==NULL)
	{
		printf(":::::list is empty::::");
	}
	else
	{
		while(temp != NULL)
		{
			printf("the name of student\t\t%s\n", temp->name);
			printf("the roll of student\t\t%d\n", temp->roll);
			printf("the sec of student\t\t%s\n", temp->sec);
			printf("the stream of student\t\t%s\n", temp->stream);
			
			temp = temp->link;
			
		}
	}
}
	    
	
	int menu()
{
	int ch;
	//printf("\n1. ADD THE VALUE TO THE LIST in FIRST position::::\t");
	printf("\n1. add the value to the last position:::::\t");
	printf("\n2. DELETE THE FIRST VALUE:::::\t");
	//printf("\n4. DELETE THE LAST VALUE:::::\t");
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
	printf("\n$ $ $ $    HELLO USER   $ $ $ $");
	printf("\nTHIS IS MY FRIST STUDENT DATABASE HOPE YOU LIKE IT");
    printf ("\n    <<<<Welcome to student database>>>>\n\n");
	
	
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
   
