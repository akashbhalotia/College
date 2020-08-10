/*
 * Stack using a linked list.
 */

//created by Whiplash99
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct list //stack using a linked list
{
    int val;
    struct list *next;
} *top;

int isEmpty(){ return top==NULL;} //checks whether the stack is empty
int push(int data) //inserts an element into the stack
{
    struct list *tmp=(struct list*)malloc(sizeof(struct list));
    if(tmp==NULL)
    {
        printf("Stack overflow!\n\n");
        return INT_MAX;
    }

    tmp->val=data;
    tmp->next=NULL;

    if(isEmpty())
        top=tmp;
    else
    {
        tmp->next=top;
        top=tmp;
    }
    return data;
}
int pop() //removes and retrieves the top element of the stack
{
    if(isEmpty())
    {
        printf("Stack underflow!\n\n");
        return INT_MAX;
    }

    int data=top->val;

    struct list *tmp=top;
    top=top->next;
    free(tmp);

    return data;
}
void display() //displays elements of the stack
{
    if(isEmpty())
        printf("The stack is empty\n\n");
    else
    {
        struct list *tmp=top;
        printf("stack:\n");
        while (tmp->next!=NULL)
        {
            printf("%d->",tmp->val);
            tmp=tmp->next;
        }
        printf("%d",tmp->val);
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
