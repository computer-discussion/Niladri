#include<stdio.h>     
typedef struct {
	char name[40];
	char roll[10];
	char stream[20];
}student;



struct today {
	int date,month,year;
};


struct book{
	int bookid;
	char title[20];
	float price;
};

struct book input(){
	struct book l;
	printf("\n\n\nenter the bookid:::\n");
	scanf("%d",&l.bookid);
	printf("\nenter the title:::\n");
	scanf("%s",&l.title);
	printf("\nenter the price:::::\n");
	scanf("%f",&l.price);
	return(l);
}

void display (struct book x)
{
	printf("\n%d %s %f",x.bookid,x.title,x.price);
}
int main()
{
	int number , i;
	printf("c program for collecting information of students\n\n.-use underscore(-_-) for space \n\n");
	printf("enter the student number :::::");
	scanf("%d",&number);
	printf("\n\n");
	
	student s[number];
	
	for(i=0; i<number; i++)
	{
		printf("student %d information :::::\n\n",(i+1));
		
		printf("enter the students name::::\n");
	    scanf("%s",s[i].name);
	
		printf("enter the students roll:::\n");
		scanf("%s",s[i].roll);
		
		printf("enter the student stream:::::\n");
		scanf("%s",s[i].stream);
		printf("\n\n");
	}
	for(i=0;i<number;i++)
	{
		printf("student %d\n\n",(i+1));
		
		printf("name:::%s\n",s[i].name);
		printf("roll:::%s\n",s[i].roll);
		printf("stream:::%s\n",s[i].stream);
		
	}
	
	
	
	
	struct today d1;
	printf("enter the date::::::\n");
	scanf("%d/%d/%d",&d1.date,&d1.month,&d1.year);
	printf("here we go::::::%d/%d/%d",d1.date,d1.month,d1.year);
	
	
	
	struct book b2;
	b2=input();
	display(b2);
	
}
