/*
 * Delete a number from an array of N elements.
 * (Assuming only a single instance needs to be deleted).
 */

//created by Whiplash99
#include <stdio.h>
#include <stdlib.h>

const int notFound=-1;

void input(int *a, int N) //takes input
{
    for(int i=0;i<N;i++)
    {
        printf("Enter a number\n");
        scanf("%d",(a+i));
    }
}
int search(int a[], int N, int key) //search function
{
    for(int i=0;i<N;i++)
    {
        if(a[i]==key)
            return i;
    }
    return notFound;
}
void remove(int *a, int *N, int pos) //deletes an instance of an element from the array
{
    for(int i=pos+1;i<*N;i++)
        a[i-1]=a[i];
    *N-=1;
}
void display(int a[], int N) //displays elements of the array
{
    if(N==0)
        printf("The array is now empty\n\n");
    else
    {
        for (int i = 0; i < N; i++)
            printf("%d,", a[i]);
        printf("\n\n");
    }
}
int main() //main method
{
    int N,val,pos;

    printf("Enter the size of the array\n");
    scanf("%d",&N);

    int *a=(int*)malloc(N*sizeof(int*));
    input(a,N);

    printf("Enter a number to delete from array\n");
    scanf("%d",&val);

    pos=search(a,N,val);
    if(pos==-1)
    {
        printf("Element not present in array!\n");
        exit(0);
    }

    printf("\nArray before deletion:\n");
    display(a,N);

    remove(a, &N, pos);

    printf("Array after deletion:\n");
    display(a,N);

    return 0;
}
