#include <stdio.h> 
#include<stdlib.h>

 struct node
{
   struct node* prev;	
   int info;
   struct node* next;
  
};

 struct node* START = NULL;

 struct node* createnewnode()
{
	struct node*n;
	n=(struct node*)malloc(sizeof (struct node));
	return (n);
}

 void lastnode()
{

	struct node* temp,*t;
	temp = createnewnode();
    printf("enter the new number:::::::\t");
	scanf("%d",&temp->info); 
	temp->next = NULL;
	if(START == NULL) 
	{
		START = temp;
	}
	else
	{
		t = START;
		while(t->next!='\0')
		{
			t=t->next;
		}
		t->next=temp;
		
	}
	 
}

void frontnode()
{
	struct node* temp,*t;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
	temp = createnewnode();
    printf("enter the new number:::::::\t");
	scanf("%d",&temp->info);
	temp->prev = NULL;
	if(START == NULL)
	{
		START = temp;
	}
	else
	{
		
		while(t->next!='\0')
		{
			t=t->next;
		}
		t->next=temp;
		
	}
	 
}
