/*
 * Implement a circular queue using an array.
 */

//created by Whiplash99
#include <stdio.h>
#include <limits.h>

const int capacity=5; //set according to your preference
int queue[capacity];
int front=0,rear=0,size=0;

int isEmpty(){ return size==0;} //checks if the queue is empty
int isFull(){ return size==capacity;} //checks if the queue is full
int enqueue(int data) //inserts an element into the queue
{
    if(isFull())
    {
        printf("The queue is full!\n\n");
        return INT_MAX;
    }

    queue[rear++]=data;
    rear%=capacity;
    size++;

    return data;
}
int dequeue() //deletes the front element of the queue
{
    if(isEmpty())
    {
        printf("The queue is empty!\n\n");
        return INT_MAX;
    }

    int val=queue[front++];
    front%=capacity;
    size--;

    return val;
}
void display() //displays the elements of the queue
{
    if(isEmpty())
        printf("The queue is empty\n\n");
    else
    {
        printf("Queue:\n");
        if(rear<=front)
        {
            for(int i=front;i<capacity;i++)
                printf("%d->",queue[i]);
            for(int i=0;i<rear;i++)
                printf("%d->",queue[i]);
        }
        else
        {
            for (int i = front; i < rear; i++)
                printf("%d->", queue[i]);
        }
        printf("\n\n");
    }
}
int main() //main method
{
    int choice=-1,data;
    do
    {
        printf("QUEUE:\n");
        printf("1) Enqueue\n2) Dequeue\n3) Display queue\n4) Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
                printf("Enter a number\n");
                scanf("%d",&data);
                data=enqueue(data);
                if(data != INT_MAX)
                    printf("%d has entered the queue\n\n",data);
                break;
            case 2:
                data=dequeue();
                if(data != INT_MAX)
                    printf("%d has left the queue\n\n",data);
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Goodbye!\n\n");
                break;
            default:
                printf("Invalid choice\n\n");
        }
    }while (choice!=4);

    return 0;
}
