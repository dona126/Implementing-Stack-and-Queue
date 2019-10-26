//Implementing Stack Using Array

#include<stdio.h>
#include<stdlib.h>
void push(int data);
int pop();
int top=-1;
int size=5;
int stack[5];
void main()
	{
		int data,ch,d;
		while(1)
			{
				printf("\n\nChoices are:\n1.Insertion\n2.Deletion\n");
				printf("Enter choice:\n");
				scanf("%d",&ch);
				switch(ch)
					{
					case 1:
						{
						printf("Choice selected for insertion:\n");
						printf("Enter data:");
						scanf("%d",&data);
						push(data);
						break;
						}
					case 2:
						{
						printf("Choice selected for deletion:\n");
						d=pop();
						printf("%d is popped",d);
						break;
						}
					}
			}
	}



void push(int data)
	{

		if(top==size-1)
			{
				printf("Overflow\n");
				exit (0);
			}
		else
			{
				top=top+1;
				stack[top]=data;

			}
	}



int pop()
	{

		if(top==-1)
			{
				printf("Underflow\n");
				exit (0);
			}
		else
			{
				return (stack[top--]);
			}
	}
