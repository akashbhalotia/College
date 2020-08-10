/*
 * Infix to postfix.
 * Assuming a valid infix expression has been entered.
 */

//created by Whiplash99
#include <stdio.h>

const int capacity=100;
char stack[capacity];
int top=-1;

int isEmpty(){ return top==-1;} //checks if the stack is empty
char peek() { return stack[top];}//returns the top element of the stack
void push(char ch){stack[++top]=ch;} //inserts an element into the stack
char pop(){ return stack[top--];} //returns and removes the top element of the stack
int isLetter(char ch){ return ('a'<=ch&&ch<='z')||('A'<=ch&&ch<='Z');} //checks if the character is a letter
int precedence(char ch)
{
    switch (ch)
    {
        case '^':return 3;
        case '*':case '/':return 2;
        case '+':case '-':return 1;
        default:return 0;
    }
}
void convert(char str[]) //converts infix to postfix form
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(isLetter(str[i]))
            printf("%c",str[i]);
        else if(str[i]=='(')
            push(str[i]);
        else if(str[i]==')')
        {
            while (peek()!='(')
                printf("%c",pop());
            pop();
        }
        else //operator
        {
            while (!isEmpty()&&precedence(str[i])<=precedence(peek()))
                printf("%c",pop());
            push(str[i]);
        }
    }
    while (!isEmpty())
        printf("%c",pop());
    printf("\n\n");
}
int main() //main method
{
    char str[100];

    printf("Enter a valid infix expression:\n");
    scanf("%[^\n]",str);

    printf("\nPostfix form:\n");
    convert(str);
    return 0;
}
