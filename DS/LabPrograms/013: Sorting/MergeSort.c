/*
 * Merge sort. O(NLogN).
 * Stable sort.
 * Requires extra space.
 */

//created by Whiplash99
#include <stdio.h>

void input(int a[], int N) //takes input
{
    for(int i=0;i<N;i++)
    {
        printf("Enter a number\n");
        scanf("%d",&a[i]);
    }
}
void merge(int a[], int tmp[], int l, int mid, int r) //merge function, conquer step
{
    int i=l,j=mid+1,k=l;

    while (i<=mid&&j<=r)
    {
        if(a[i]<=a[j])
            tmp[k++]=a[i++];
        else
            tmp[k++]=a[j++];
    }

    while (i<=mid)
        tmp[k++]=a[i++];
    while (j<=r)
        tmp[k++]=a[j++];

    for(i=l;i<=r;i++)
        a[i]=tmp[i];
}
void mergeSort(int a[], int tmp[], int l, int r) //divide step
{
    if(l<r)
    {
        int mid=(l+r)/2;

        mergeSort(a,tmp,l,mid); //sort left side
        mergeSort(a,tmp,mid+1,r); //sort right side

        merge(a,tmp,l,mid,r); //merge the two sides
    }
}
void sort(int a[], int N) //sorts the array
{
    int tmp[N];
    mergeSort(a,tmp,0,N-1);
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
