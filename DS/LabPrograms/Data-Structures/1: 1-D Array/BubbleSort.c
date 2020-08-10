/*
 * Bubble sort. O(N^2).
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
void swap(int *a, int *b) //swaps the values of two numbers
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
void sort(int a[], int N) //sorts the array
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
        }
    }
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
