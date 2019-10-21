// created by Whiplash99

/*
    Binary Search
    Assuming array is sorted.
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
int binary_search(int a[], int N, int key, int low, int high) //binary search
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==key)
            return mid+1;
        else if(a[mid]<key)
            low=mid+1;
        else
            high=mid-1;
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

    int pos=binary_search(a,N,key,0,N-1);
    printf((pos==-1)?"Not found!\n":"Found at position %d (1-indexed)\n",pos);
    return 0;
}
