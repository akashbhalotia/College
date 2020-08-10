/*
 * Print the pre-order, in-order and post-order traversals of a BST.
 * O(N).
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

void input(int a[], int N) //enter values into an array
{
    for(int i=0;i<N;i++)
    {
        printf("Enter a number\n");
        scanf("%d",&a[i]);
    }
}
void preOrder(struct node *cur) //pre-order traversal. Root, Left, Right.
{
    if(cur!=NULL)
    {
        printf("%d, ",cur->key);
        preOrder(cur->left);
        preOrder(cur->right);
    }
}
void inOrder(struct node *cur) //in-order traversal. Left, Root, Right.
{
    if(cur!=NULL)
    {
        inOrder(cur->left);
        printf("%d, ",cur->key);
        inOrder(cur->right);
    }
}
void postOrder(struct node *cur) //post-order traversal. Left, Right, Root.
{
    if(cur!=NULL)
    {
        postOrder(cur->left);
        postOrder(cur->right);
        printf("%d, ",cur->key);
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

    printf("\nThe pre-order traversal is:\n");
    preOrder(root);

    printf("\n\nThe in-order traversal is:\n");
    inOrder(root);

    printf("\n\nThe post-order traversal is:\n");
    postOrder(root);

    return 0;
}
