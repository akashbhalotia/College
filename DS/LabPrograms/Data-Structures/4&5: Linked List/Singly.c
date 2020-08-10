/*
 *  Singly linked-list.
 */

//created by Whiplash99
#include <stdio.h>
#include <stdlib.h>

int size=0;

struct list //singly linked list
{
    int data;
    struct list *next;
} *start;
int isEmpty(){ return size==0;} //checks if the list is empty
int isValidInsert(int i){ return 0<=i&&i<=size;} //is a valid position to insert to
int isValidRemove(int i){ return 0<=i&&i<size;} //checks if it is a valid position to delete
void add(int data, int pos) //inserts a node at the specified position
{
    struct list *tmp=(struct list*)malloc(sizeof(struct list));
    tmp->data=data;
    tmp->next=NULL;

    if(isEmpty())
        start=tmp;
    else
    {
        if(pos==0)
        {
            tmp->next=start;
            start=tmp;
        }
        else
        {
            struct list *prev=start,*next=start->next;
            for(int i=1;i<pos;i++)
            {
                prev=next;
                next=next->next;
            }
            prev->next=tmp;
            tmp->next=next;
        }
    }
    size++;
}
int remove(int pos) //deletes the node at the specified position
{
    int ans;
    if(pos==0)
    {
        struct list *tmp=start;

        ans=start->data;
        start=start->next;

        free(tmp);
    }
    else
    {
        struct list *prev=start,*next=start->next;
        for(int i=1;i<pos;i++)
        {
            prev=next;
            next=next->next;
        }
        prev->next=next->next;
        ans=next->data;
        free(next);
    }
    size--;
    return ans;
}
void display() //displays the linked list
{
    struct list *tmp=start;

    printf("The list is:\n");
    for(int i=0;i<size-1;i++)
    {
        printf("%d->",tmp->data);
        tmp=tmp->next;
    }
    printf("%d",tmp->data);
    printf("\n\n");
}
int main() //main method
{
    int choice=-1,data, pos;
    do
    {
        printf("SINGLY LINKED LIST:\n");
        printf("1) Insert a node at a position\n");
        printf("2) Delete a node at a position\n");
        printf("3) Display the list\n");
        printf("4) Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
                printf("Enter a number, and a position to insert to (%d to %d)\n",0,size);
                scanf("%d%d",&data,&pos);
                if(!isValidInsert(pos))
                    printf("Invalid position.\n\n");
                else
                {
                    add(data,pos);
                    printf("%d has been added to the list\n\n",data);
                }
                break;
            case 2:
                if(isEmpty())
                    printf("The list is empty\n\n");
                else
                {
                    printf("Enter the position of the node to delete (%d to %d)\n",0,size-1);
                    scanf("%d",&pos);
                    if(!isValidRemove(pos))
                        printf("Invalid position.\n\n");
                    else
                    {
                        data=remove(pos);
                        printf("%d has been deleted from the list\n\n",data);
                    }
                }
                break;
            case 3:
                if(isEmpty())
                    printf("The list is empty\n\n");
                else
                    display();
                break;
            case 4:
                printf("Good bye\n\n");
                break;
            default:
                printf("Invalid choice\n\n");
        }
    }
    while (choice!=4);
    return 0;
}
