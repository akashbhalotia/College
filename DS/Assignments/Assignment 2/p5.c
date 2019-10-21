// created by Whiplash99

/*
    Largest and second largest.
    Assuming array has atleast 2 elements.
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
int linear_search(int a[], int N, int key) //linear search
{
    for(int i=0;i<N;i++)
    {
        if(a[i]==key)
            return (i+1);
    }
    return -1;
}
int main()
{
    int N;
    printf("Enter size of array\n");
    scanf("%d",&N);

    int a[N];
    input(a,N);

    int key;
    printf("Enter the value to be searched\n");
    scanf("%d",&key);

    int pos=linear_search(a,N,key);
    printf((pos==-1)?"Not found!\n":"Found at position %d (1-indexed)\n",pos);

    return 0;
}
