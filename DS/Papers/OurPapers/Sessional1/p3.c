/*
	Write a function to delete odd nodes from a linked list.
	Only writing that function is sufficient.
*/

//created by akashbhalotia

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void delOdd(struct node **start) 
{
	if(*start==NULL)
		return;
	
	struct node *ptr,*tmp;
	
	tmp=*start;
	*start=(*start)->next;
	free(tmp);
	
	ptr=*start;
	while(ptr!=NULL&&ptr->next!=NULL)
	{
		tmp=ptr->next;
		ptr->next=ptr->next->next;
		ptr=ptr->next;
		free(tmp);
	}
}
void insert(struct node **start,int data)
{
	if(*start==NULL)
	{
		*start=(struct node*)malloc(sizeof(struct node));
		(*start)->data=data;
		(*start)->next=NULL;
	}
	else
	{
		struct node *ptr=*start;
		while(ptr->next!=NULL)
			ptr=ptr->next;
			
		struct node *tmp=(struct node*)malloc(sizeof(struct node));
		tmp->data=data;
		tmp->next=NULL;
		ptr->next=tmp;
	}
}
void printList(struct node **start)
{
	struct node *ptr=*start;
	
	if(ptr==NULL)
	{
		printf("The list is empty\n");
		return;
	}
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
int main()
{
	int i;
	
	struct node *start=NULL;
	for(i=1;i<=10;i++)
		insert(&start,i);
	printList(&start);
	delOdd(&start);
	printList(&start);
		
	return 0;
}
