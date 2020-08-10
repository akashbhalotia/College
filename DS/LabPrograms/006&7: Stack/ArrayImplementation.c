/*
 * Stack using array.
 */

//created by Whiplash99
#include <stdio.h>
#include <limits.h>

const int capacity=100;
int stack[capacity];
int top=-1;

int isEmpty(){ return top==-1;} //checks whether the stack is empty
int isFull(){ return top==capacity-1;} //checks whether the stack is full
int push(int data) //inserts an element into the stack
{
    if(isFull())
    {
        printf("Stack overflow!\n\n");
        return INT_MAX;
    }
    stack[++top]=data;
    return data;
}
int pop() //removes and retrieves the top element of the stack
{
    if(isEmpty())
    {
        printf("Stack underflow!\n\n");
        return INT_MAX;
    }
    return stack[top--];
}
void display() //displays elements of the stack
{
    if(isEmpty())
        printf("The stack is empty\n\n");
    else
    {
        printf("stack:\n");
        for(int i=top;i>=0;i--)
            printf("%d->",stack[i]);
        printf("\n\n");
    }
}
int main() //main method
{
    int choice=-1,data;
    do
    {
        printf("STACK:\n");
        printf("1) Push\n2) Pop\n3) Display stack\n4) Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
                printf("Enter a number\n");
                scanf("%d",&data);
                data=push(data);
                if(data != INT_MAX)
                    printf("%d pushed into the stack\n\n",data);
                break;
            case 2:
                data=pop();
                if(data != INT_MAX)
                    printf("%d popped from the stack\n\n",data);
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
