/*
 * Evaluate an expression in postfix notation.
 * Assuming single digit operands.
 * Assuming input is a valid expression.
 * Assuming operations are : +,-,*,/,%.
 */

//created by Whiplash99
#include <stdio.h>
#include <stdlib.h>

const int capacity=100;
int stack[capacity];
int top=-1;

int push(int data) //inserts an element into the stack
{
    stack[++top]=data;
    return data;
}
int pop() //removes and retrieves the top element of the stack
{
    return stack[top--];
}
int isDigit(char ch){ return '0'<=ch&&ch<='9';} //checks whether the character is a digit
void operate(char ch) //performs arithmetic operation
{
    int b=pop(),a=pop(),ans=0;
    switch (ch)
    {
        case '+':ans=a+b;break;
        case '-':ans=a-b;break;
        case '*':ans=a*b;break;
        case '/':ans=a/b;break;
        case '%':ans=a%b;break;
        default:printf("Operator \'%c\' is not recognised\n",ch);exit(0);
    }
    push(ans);
}
int main() //main method
{
    char str[100];

    printf("Enter expression in postfix notation\n");
    scanf("%[^\n]",str);

    for(int i=0;str[i]!='\0';i++)
    {
        if(isDigit(str[i]))
            push(str[i]-'0');
        else
            operate(str[i]);
    }

    printf("Answer: %d\n",pop());

    return 0;
}
