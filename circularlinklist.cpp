 /*
 Author: niladri banerjee
 Date: 16-09-18/ 1.35am 
 */
 
#include<stdio.h>                                             
#include<stdlib.h>	                                                              
                                                           

struct node                                            
{
	int data;
	struct node* address; 
};
struct node* START=NULL ;
struct node* end;

struct node* createnewnode ()
{
	struct node*n;
	n=(struct node*)calloc(sizeof (struct node),1);
	return(n);
	
}



void addatfirst()
{
	struct node* temp,*t ;
	temp = createnewnode ();
	printf("\n\nenter the number :::::::::\t\n");
	scanf("%d",&temp->data);
	if(START==NULL)
	{
		START = temp;
		end = temp;
		temp->address = temp;
	}
	
	else
	{
		t = START;
		START = temp;
		temp->address = t;
		end->address=temp;
	}
	
}

void addatlast()
{
	struct node* temp,*t ;
	temp = createnewnode ();
	printf("\n\nenter the number :::::::::\t\n");
	scanf("%d",&temp->data);
	if(START==NULL)
	{
		START = temp;
		end = temp;
		temp->address = temp;
	}
	
	else
	{
		t = START;
			while(t->address != end->address)
			{
				t=t->address;
				
			}
			t->address=temp;
			end=temp;
			temp->address=START;
	}
}


void insertnode_at_anyposition()
{
	struct node* new_node,*temp;
	int n,i;
	new_node= createnewnode();
	printf("\n \t enter your input ");
	scanf("%d",& new_node->data);
	new_node->data=NULL;
	printf("\n enter the position ");
	scanf("%d",&n);
	
	if(n==1)
	{
	 addatfirst();
	}
	else
	{
		temp = START;
		for(i=1;i<n-1;i++)
		{
			temp=temp->address;
		}
		
	new_node->address=temp->address;
	temp->address=new_node;
	}
	
	
}

void display()
{
  	struct node*temp;
	temp = START;
	if(START == NULL)
	{
		printf("\n\n:::::list is empty:::::");
	}
	else
	{
		while (1)
		{
		{
			printf("\n\nthe number is \t %d\n", temp->data);
			if (temp->address == START) break;
			temp=temp->address;
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
		next = current -> address;
		current->address = prev;
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
			
			printf("\n\n %d\n",temp->data);
			temp=temp->address;
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
			if(k->data==numb)
			{
			printf("\n\n search is successful::::\t%d \n\n", numb);
			return;
			}
			
			else 
			{
				k=k->address;
				
			}
			
		}
		printf("\n\n  NUMBER IS NOT IN THE LIST  \n\n");
	}
   }


	int menu()
{
	int ch;
	
	printf("\n1. add first:::::\t");
	printf("\n2. add last:::::\t");
	printf("\n3. VIEW LIST:::::\t");
   	printf("\n4. reverse list::::\t");
	printf("\n5. search the number from a list::::\t");
	printf("\n6. insertnode_at_anyposition::::: ");
		
	scanf("\n %d",&ch);
	
	return(ch);
}


int main()
{
	while(1)
	{
	
	switch (menu())
	{
		case 1: addatfirst();
		      
		      break;
		
		case 2: addatlast();
		    
		    break;
		
		case 3:display();
		   
		    break;
		    
		case 4:reverse();
		    break;
		    
		case 5:search();
		  break;
		  
		case 6:
			insertnode_at_anyposition();
			
			case 7:
				exit(0);
		    
		default:
			printf("invalid");
	}
    }
}
