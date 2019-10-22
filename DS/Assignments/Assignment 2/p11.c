// created by Whiplash99

/*
   Sort the array in such a way that even values precede odd values.
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
void sort(int a[], int N) //sort according to condition
{
    int i,pos=0,tmp;
    for(i=0;i<N;i++)
    {
        if(a[i]%2==0)
        {
            tmp=a[pos];
            a[pos]=a[i];
            a[i]=tmp;
            pos++;
        }
    }
}
void printArr(int a[], int N) //prints the array.
{
    for(int i=0;i<N;i++)
        printf("%d,",a[i]);
    printf("\n\n");
}
int main()
{
    int N;
    printf("Enter size of array\n");
    scanf("%d",&N);
    int a[N];
    input(a,N);

    sort(a,N);
    printArr(a,N);

    return 0;
}
