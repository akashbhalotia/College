// created by Whiplash99

/*
    All three sorts in 1 program.
 */
#include<stdio.h>
void input(int a[], int N)//array input
{
    for(int i=0;i<N;i++)
    {
        printf("Enter a number\n");
        scanf("%d",&a[i]);
    }
}
void bubbleSort(int a[], int N) //bubble sort
{
    int i,j,tmp;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
}
void selectionSort(int a[], int N) //selection sort
{
    int i,j,tmp,pos,small;

    for(i=0;i<N;i++)
    {
        small=a[i];
        pos=i;

        for(j=i+1;j<N;j++)
        {
            if(a[j]<small)
            {
                small=a[j];
                pos=j;
            }
        }

        tmp=a[i];
        a[i]=a[pos];
        a[pos]=tmp;
    }
}
void insertionSort(int a[], int N) //insertion sort
{
    int i,j,tmp;
    for(i=0;i<N;i++)
    {
        j=i;
        while(j-1>=0&&a[j]<a[j-1])
        {
            tmp=a[j];
            a[j]=a[j-1];
            a[j-1]=tmp;
            j--;
        }
    }
}
void printArr(int a[], int N) //prints the array.
{
    for(int i=0;i<N;i++)
        printf("%d,",a[i]);
    printf("\n\n");
}
void run(int type) //to avoid repetitiveness
{
    int N;
    printf("Enter size of array %d\n",type);
    scanf("%d",&N);

    int a[N];
    input(a,N);

    printf("\nArray before sorting:\n");
    printArr(a,N);

    if(type==1)
        bubbleSort(a,N);
    else if(type==2)
        selectionSort(a,N);
    else
        insertionSort(a,N);

    printf("\nArray after sorting:\n");
    printArr(a,N);
}
int main()
{
    run(1);
    run(2);
    run(3);

    return 0;
}
