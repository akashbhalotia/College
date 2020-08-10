/*
 * Heap sort
 * Using min-heap
 * O(NlogN)
 */

//created by Whiplash99
#include <stdio.h>
#include <limits.h>

void input(int a[], int N) //takes input
{
    for(int i=0;i<N;i++)
    {
        printf("Enter a number\n");
        scanf("%d",&a[i]);
    }
}
int min(int a, int b){ return (a<b)?a:b;} //returns the minimum of two values
void copyArr(int a[], int heap[], int N) //copies the values of one array into another
{
    for(int i=0;i<N;i++)
        heap[i]=a[i];
}
void swap(int *a, int *b) //swaps the values of two numbers
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
void bubbleDown(int heap[], int parent, int N) //maintains order in the heap by bubbling down changes
{
    int lChild=min(parent * 2 + 1, N),rChild=min(parent * 2 + 2, N);
    (heap[rChild] < heap[lChild]) ? swap(&lChild, &rChild) : swap(&lChild, &lChild);

    while (parent<N&& heap[lChild] < heap[parent])
    {
        swap(&heap[parent],&heap[lChild]);
        parent=lChild;

        lChild=min(parent * 2 + 1, N), rChild=min(parent * 2 + 2, N);
        (heap[rChild] < heap[lChild]) ? swap(&lChild, &rChild) : swap(&lChild, &lChild);
    }
}
int extractMin(int heap[], int N) //removes and retrieves the min element in heap
{
    int val=heap[0];

    heap[0]=INT_MAX;
    bubbleDown(heap,0,N);

    return val;
}
void heapify(int heap[], int N) //converts the array into a heap in O(N)
{
    heap[N]=INT_MAX;
    for(int i=(N-2)/2;i>=0;i--)
        bubbleDown(heap,i,N);
}
void sort(int a[], int N) //sorts the array
{
    int heap[N+1];

    copyArr(a,heap,N);
    heapify(heap,N);

    for(int i=0;i<N;i++)
        a[i]=extractMin(heap,N);
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
