/*
 *  Implement a queue using a linked list.
 */

//created by Whiplash99
#include <stdio.h>
#include <stdlib.h>

int size=0;

struct list //singly linked list
{
    int data;
    struct list *next;
} *front=NULL,*rear=NULL;
int isEmpty(){ return size==0;} //checks if the queue is empty
struct list *createNode(){ return (struct list*)malloc(sizeof(struct list));} //creates a new node
void enqueue(int data) //inserts a node into the queue
{
    struct list *newNode=createNode();
    newNode->data=data;
    newNode->next=NULL;

    if(isEmpty())
        front=rear=newNode;
    else
    {
        rear->next=newNode;
        rear=newNode;
    }
    size++;
}
int dequeue() //deletes the node at the front of the queue
{
    int ans=front->data;

    struct list *tmp=front;
    front=front->next;
    free(tmp);

    size--;
    return ans;
}
void display() //displays the queue
{
    struct list *itr=front;

    printf("The queue is:\n");
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
    int choice=-1,data;
    do
    {
        printf("QUEUE:\n");
        printf("1) Enqueue\n");
        printf("2) Dequeue\n");
        printf("3) Display the queue\n");
        printf("4) Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
                printf("Enter a number to enqueue:\n");
                scanf("%d",&data);
                enqueue(data);
                printf("%d has been added to the list\n\n",data);
                break;
            case 2:
                if(isEmpty())
                    printf("The queue is empty\n\n");
                else
                {
                    data = dequeue();
                    printf("%d has been deleted from the list\n\n", data);
                }
                break;
            case 3:
                if(isEmpty())
                    printf("The queue is empty\n\n");
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
