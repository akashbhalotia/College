/*
 * Quick sort.
 * Not stable.
 * O(NlogN) on average.
 * O(N^2) worst case.
 * Here, I have implemented a randomised pivot version,
 * to have better chance of O(NlogN).
 *
 * Flaw: rand() only generates numbers from 0 to RAND_MAX.
 * We can use a different random number generator to overcome this,
 * but I used rand() here for the sake of simplicity.
 */

//created by Whiplash99
#include <stdio.h>
#include <stdlib.h>

void input(int a[], int N) //takes input
{
    for(int i=0;i<N;i++)
    {
        printf("Enter a number\n");
        scanf("%d",&a[i]);
    }
}
void swap(int *a, int *b) //swaps the values of two numbers
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
int partition(int a[], int l, int r) //partition, conquer step
{
    int pos=l+rand()%(r-l+1);
    int pivot=a[pos];

    swap(&a[l],&a[pos]);
    pos=l+1;

    for(int i=l+1;i<=r;i++)
    {
        if(a[i]<pivot)
        {
            swap(&a[i],&a[pos]);
            pos++;
        }
    }
    swap(&a[l],&a[pos-1]);
    return pos-1;
}
void quickSort(int a[], int l, int r) //divide step
{
    if(l<r)
    {
        int pos=partition(a,l,r); //position of the pivot

        quickSort(a,l,pos-1); //sort left side
        quickSort(a,pos+1,r); //sort right side
    }
}
void sort(int a[], int N) //sorts the array
{
    quickSort(a,0,N-1);
}
void display(int a[], int N) //displays elements of the array
{
    for(int i=0;i<N;i++)
        printf("%d,",a[i]);
    printf("\n\n");
}
int main() //main method
{
    int N;

    printf("Enter the size of the array\n");
    scanf("%d",&N);

    int a[N];
    input(a,N);

    printf("\nArray before sorting:\n");
    display(a,N);

    sort(a,N);

    printf("Array after sorting:\n");
    display(a,N);

    return 0;
}
