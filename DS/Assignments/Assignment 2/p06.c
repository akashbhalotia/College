// created by Whiplash99

/*
    Count number of occurrences of a number in an array.
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
int linear_search1(int a[], int N, int key) //linear search
{
    int count=0;
    for(int i=0;i<N;i++)
    {
        if(a[i]==key)
            count++;
    }
    return count;
}
int main()
{
    int N;
    printf("Enter size of array\n");
    scanf("%d",&N);

    int a[N];
    input(a,N);

    int key;
    printf("Enter the value to be counted\n");
    scanf("%d",&key);

    int count=linear_search1(a,N,key);
    printf("%d occurs %d times in the array\n",key,count);

    return 0;
}
