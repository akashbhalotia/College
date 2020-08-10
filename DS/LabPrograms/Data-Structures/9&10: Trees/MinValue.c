/*
 * Find the minimum value in a BST.
 * O(N) in the worst case, in case of a linear tree.
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
struct node *minValue(struct node *cur) //returns the smallest value node in this subtree
{
    if(cur->left!=NULL)
        return minValue(cur->left);
    else
        return cur;
}
int findMin() //helper function
{
    if(isEmpty())
        return INT_MIN;
    return minValue(root)->key;
}
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
    int N,tmp;
    printf("Creating a BST from an array...\n");
    printf("Enter the size of the array\n");
    scanf("%d",&N);
    int a[N];
    input(a,N);

    create(a,N);

    tmp=findMin();
    if(tmp==INT_MIN)
        printf("The BST is empty\n\n");
    else
        printf("The min value in this BST is: %d\n\n",tmp);

    return 0;
}
