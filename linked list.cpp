#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*head;
void creatlist(int n);
void traverslist();
int main()
{
	int n;
	printf("enter how many nodes are there");
	scanf("%d",&n);
	creatlist(n);
	printf("the linked list node are there\n");
	traverslist();
	return 0;
}
void creatlist(int n)
{
	struct node*newnode,*temp;
	int data;int i;
	head=(struct node*)malloc(sizeof(struct node));
	if(head==NULL)
	{
		printf("creatioon of node is not possible");
		exit(0);
	}
	printf("enter data");
	scanf("%d",&data);
	head->data=data;
	head->next=NULL;
	temp=head;
	for(i=2;i<=n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		if(newnode==NULL)
		{
			printf("no memory avavilable");
			break;
		}
		printf("enter data for node");
		scanf("%d",&data);
		newnode->data=data;
		newnode->next=NULL;
		temp->next=newnode;
		temp=temp->next;
	}
}
void traverslist()
{
	struct node*temp;
	if(head==NULL)
	{
		printf("list is empty");
		return ;
	}
	temp=head;
	while(temp!=NULL)
	{
		printf("data at node %d\n",temp->data);
		temp=temp->next;
	}
}
