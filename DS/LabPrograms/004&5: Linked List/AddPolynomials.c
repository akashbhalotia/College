/*
 * Add two polynomials using linked list.
 * Assuming the terms in a polynomial are arranged in decreasing order of their powers of x.
 * O(N+M), where N and M are the number of terms in the two polynomials respectively.
 */

//created by Whiplash99
#include <stdio.h>
#include <stdlib.h>

struct list //linked list
{
    int coeff,pow;
    struct list *next;
};

int isEmpty(struct list **cur){ return (*cur)==NULL;} //checks if the list is empty
struct list *createNode(){ return (struct list*)malloc(sizeof(struct list));} //creates a new node
struct list *getEnd(struct list **cur) //returns the end node of the list
{
    struct list *endNode=*cur;
    while(endNode->next!=NULL) endNode=endNode->next;
    return endNode;
}
void insert(struct list **cur, int coeff, int pow) //inserts a term into the polynomial
{
    struct list *newNode=createNode();
    newNode->coeff=coeff;
    newNode->pow=pow;
    newNode->next=NULL;

    if(isEmpty(cur))
        *cur=newNode;
    else
    {
        struct list *endNode=getEnd(cur);
        endNode->next=newNode;
    }
}
void removeHead(struct list **cur) //removes the first term of the polynomial
{
    struct list *tmp=*cur;
    *cur = (*cur)->next;
    free(tmp);
}
int compare(struct list **p1, struct list **p2) //compares the powers of the two head terms
{
    if((*p1)->pow>(*p2)->pow)
        return 1;
    else if((*p1)->pow<(*p2)->pow)
        return -1;
    return 0;
}
void addition(struct list **p1, struct list **p2, struct list **res) //adds the two polynomials
{
    while (!isEmpty(p1)&&!isEmpty(p2))
    {
        int c=compare(p1,p2);
        if(c>0)
        {
           insert(res,(*p1)->coeff,(*p1)->pow);
           removeHead(p1);
        }
        else if(c<0)
        {
            insert(res,(*p2)->coeff,(*p2)->pow);
            removeHead(p2);
        }
        else
        {
            insert(res,(*p1)->coeff+(*p2)->coeff,(*p2)->pow);
            removeHead(p1);
            removeHead(p2);
        }
    }
    while (!isEmpty(p1))
    {
        insert(res,(*p1)->coeff,(*p1)->pow);
        removeHead(p1);
    }
    while (!isEmpty(p2))
    {
        insert(res,(*p2)->coeff,(*p2)->pow);
        removeHead(p2);
    }
}
void display(struct list **cur) //displays the polynomial
{
    struct list *itr=(*cur);
    while (itr!=NULL)
    {
        printf("%d",itr->coeff);
        printf("x^");
        printf("%d",itr->pow);

        itr=itr->next;
        if(itr!=NULL)
        {
            if(itr->coeff>=0)
                printf("+");
        }
    }
}
int main() //main method
{
    int N,M,coeff,pow;
    struct list *p1=NULL,*p2=NULL,*res=NULL;

    printf("Enter the number of terms in polynomial 1:\n");
    scanf("%d",&N);

    printf("Enter polynomial 1:\n");
    for(int i=0;i<N;i++)
    {
        printf("Enter coefficient:\n");
        scanf("%d",&coeff);
        printf("Enter power of x:\n");
        scanf("%d",&pow);

        insert(&p1,coeff,pow);
    }

    printf("\nEnter the number of terms in polynomial 2:\n");
    scanf("%d",&M);

    printf("Enter polynomial 2:\n");
    for(int i=0;i<M;i++)
    {
        printf("Enter coefficient:\n");
        scanf("%d",&coeff);
        printf("Enter power of x:\n");
        scanf("%d",&pow);

        insert(&p2,coeff,pow);
    }

    printf("\n\nPolynomial 1 is:\n");
    display(&p1);

    printf("\n\nPolynomial 2 is:\n");
    display(&p2);

    addition(&p1,&p2,&res);
    printf("\n\nResultant:\n");
    display(&res);
    printf("\n");

    return 0;
}
