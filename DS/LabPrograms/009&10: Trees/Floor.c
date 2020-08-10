/*
 *  Search for the largest number in a BST, <= to a value.
 *  O(N) in the worst case, in case of a linear tree.
 */

//created by Whiplash99
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int size=0;

struct node //a node structure
{
    int key;
    struct node *left,*right;
} *root;
int max(int a, int b){ return (a>b)?a:b;} //returns the max of 2 values
int isEmpty() { return size==0;}//checks if the BST is empty
void add(struct node *cur, struct node *tmp) // inserts a value into the BST
{
    if(tmp->key<cur->key)
    {
        if(cur->left==NULL)
            cur->left=tmp;
        else
            add(cur->left,tmp);
    }
    else
    {
        if(cur->right==NULL)
            cur->right=tmp;
        else
            add(cur->right,tmp);
    }
}
void insert(int val) //helper function
{
    struct node *tmp=(struct node*)malloc(sizeof(struct node));
    tmp->key=val;
    tmp->left=NULL;
    tmp->right=NULL;

    if(isEmpty())
        root=tmp;
    else
        add(root,tmp);
    size++;
}
int search(struct node *cur,int val) //searches for the largest number < = val
{
    if(cur==NULL)
        return INT_MIN;
    if(val<cur->key)
        return search(cur->left,val);
    else
        return max(cur->key,search(cur->right,val));
}
int findFloor(int val) { return search(root,val);} //helper function
void input(int a[], int N) //enter values into an array
{
    for(int i=0;i<N;i++)
    {
        printf("Enter a number\n");
        scanf("%d",&a[i]);
    }
}
void create(int a[], int N) //creates a BST from an array
{
    for(int i=0;i<N;i++)
        insert(a[i]);
}
int main() //main method
{
    int N,Q,val,tmp;
    printf("Creating a BST from an array...\n");
    printf("Enter the size of the array\n");
    scanf("%d",&N);
    int a[N];
    input(a,N);

    create(a,N);

    printf("Enter the number of queries:\n");
    scanf("%d",&Q);

    while (Q--)
    {
        printf("Enter a number\n");
        scanf("%d",&val);

        tmp=findFloor(val);
        if(tmp==INT_MIN)
            printf("All numbers in the BST are greater than %d\n\n",val);
        else
            printf("%d\n\n",tmp);
    }

    return 0;
}
