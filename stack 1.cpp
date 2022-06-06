#include<stdio.h>
#include<conio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void show();
int main()
{
	printf("enter how many stack element arre there");
	scanf("%d",&n);
	
	while(choice!=4)
	{
	
	 printf("choice one of below option");
	 printf("\n1.push\n2.pop \n3.show \n4.exit");
	 printf("\n enter your choice");
	 scanf("%d",&choice);
	 
	 switch(choice)
	 {
	 	case 1: push();
	 			break;
	 	case 2: pop();
	 			break;
	 	case 3: show();
	 			break;
	 	case 4: printf("exiting...........");
	 			break;
	 	default: printf("wrong choice");
	 }
    };
    return 0;
}
void push()
{
	int val;
	if(top==n)
	{
		printf("\n overflow");
	}
	else
	{
		printf("enter your choice");
		scanf("%d",&val);
		top++;
		stack[top]=val;
	}
}
void pop()
{
	if(top==-1)
	printf("underflow");
	else
	top--;
}
void show()
{
	for(i=top;i<=0;i--)
	{
		printf("stack is %d\n",stack[i]);
	}
	if(top==-1)
	printf("stack is empty");
}
