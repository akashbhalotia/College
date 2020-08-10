/*
 * Binary search. O(logN).
 * Assuming the array is sorted.
 */

//created by Whiplash99
#include <stdio.h>

const int notFound=-1;

void input(int a[], int N) //takes input
{
    for(int i=0;i<N;i++)
    {
        printf("Enter a number\n");
        scanf("%d",&a[i]);
    }
}
int search(int a[], int N, int key) //search function
{
    int l=0,r=N-1,mid;
    while (l<=r)
    {
        mid=(l+r)/2;
        if(key==a[mid])
            return mid;
        else if(key<a[mid])
            r=mid-1;
        else
            l=mid+1;
    }
    return notFound;
}
int main() //main method
{
    int N,key,pos;

    printf("Enter the size of the array\n");
    scanf("%d",&N);

    int a[N];
    input(a,N);

    printf("Enter a number to be searched\n");
    scanf("%d",&key);

    pos=search(a,N,key);
    printf(pos==-1?"\nNot found!\n":"\nFound at position %d (1-indexed)\n",(pos+1));

    return 0;
}
