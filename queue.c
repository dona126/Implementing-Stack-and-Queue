
//Implementing Queue Using Array

#include<stdio.h>
#include<stdlib.h>
void enqueue(int data);
int dequeue();
int front=-1,rear=-1,size=5;
int queue[5];
void main()
	{
		int data,ch,d;
		while(1)
			{
				printf("\nChoices are:\n1.Insertion\n2.Deletion\n");
				printf("Enter choice:\n");
				scanf("%d",&ch);
				switch(ch)
					{
						case 1:
							{
								printf("Choice selected for insertion:\n");
								printf("Enter data:");
								scanf("%d",&data);
								enqueue(data);
								break;
							}
						case 2:
							{
								printf("Choice selected for deletion:\n");
								d=dequeue();
								printf("%d is deleted\n",d);
								break;
							}
					}
			}
	}



void enqueue(int data)
	{
  
		if(rear==size-1)
			{
				printf("Overflow\n");
				exit (0);
			}
		else
			{
				if(rear==-1)
					{
						front=0;

					}
				queue[++rear]=data;
			}
	}


int dequeue()
	{
		int d;
		if(front==-1)
			{
				printf("Underflow\n");
				exit (0);
			}
		else
			{
				d=queue[front];
				if(front==rear)
					{
						front=-1;
						rear=-1;
					}
				else

					{
						front++;
					}
				return d;
			}
	}

