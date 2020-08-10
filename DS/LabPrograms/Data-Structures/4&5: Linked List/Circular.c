/*
 *  Circular linked-list.
 */

//created by Whiplash99
#include <stdio.h>
#include <stdlib.h>

int size=0;

struct list //circular linked list
{
    int data;
    struct list *next;
} *start;
int isEmpty(){ return size==0;} //checks if the list is empty
int isValidInsert(int i){ return 0<=i&&i<=size;} //is a valid position to insert to
int isValidRemove(int i){ return 0<=i&&i<size;} //checks if it is a valid position to delete
struct list *getEnd() //returns a pointer to the end node of the linked list
{
    struct list *endNode=start;
    for(int i=1;i<size;i++) endNode=endNode->next;
    return endNode;
}
void add(int data, int pos) //inserts a node at the specified position
{
    struct list *newNode=(struct list*)malloc(sizeof(struct list));
    newNode->data=data;
    newNode->next=NULL;

    if(isEmpty()) //if the list is empty
    {
        start = newNode;
        start->next=start;
    }
    else
    {
        struct list *prev=getEnd(),*next=start;
        for(int i=0;i<pos;i++) //bring prev to position pos-1
        {
            prev=next;
            next=next->next;
        }
        prev->next=newNode;
        newNode->next=next;

        if(pos==0)
            start=newNode;
    }
    size++;
}
int remove(int pos) //deletes the node at the specified position
{
    int ans;

    if(size==1)
    {
        ans=start->data;
        free(start);
    }
    else
    {
        struct list *prev=getEnd(),*next=start;
        for(int i=0;i<pos;i++) //bring prev to position pos-1
        {
            prev=next;
            next=next->next;
        }
        prev->next=next->next;
        ans=next->data;
        free(next);

        if(pos==0)
            start=prev->next;
    }

    size--;
    return ans;
}
void display() //displays the linked list
{
    struct list *itr=start;

    printf("The list is:\n");
    for(int i=0;i<size-1;i++)
    {
        printf("%d->", itr->data);
        itr=itr->next;
    }
    printf("%d", itr->data);
    printf("\n\n");
}
int main() //main method
{
    int choice=-1,data, pos;
    do
    {
        printf("CIRCULAR LINKED LIST:\n");
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
