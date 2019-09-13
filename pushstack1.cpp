#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#define MAX 5
int tos=-1,stack[MAX];
void push();
void pop();
void display();
 
int main()
{
	int ch;
	
	while(1)	
	{
		printf("\nStack Table");
		printf("\nEnter the following keys to perform that operation");
		printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
		printf("\n\nEnter the number:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			
			default: printf("\nWrong Choice!!");
		}
	}
}
 
void push()
{
	int val;
	
	if(tos==MAX-1)
	{
		printf("\nStack is full!!");
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&val);
		tos=tos+1;
		stack[tos]=val;
	}
}
 
void pop()
{
	if(tos==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nDeleted element is %d",stack[tos]);
		tos=tos-1;
	}
}
 
void display()
{
	int i;
	
	if(tos==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nStack is...\n");
		for(i=tos;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}
