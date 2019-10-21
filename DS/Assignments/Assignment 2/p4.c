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
int arr_largest(int a[], int N) //largest in array
{
    int pos=0,ans=a[0];
    for(int i=1;i<N;i++)
    {
        if(a[i]>ans)
        {
            ans=a[i];
            pos=i;
        }
    }

    int tmp=a[pos];
    a[pos]=a[N-1];
    a[N-1]=tmp;

    return ans;
}
int arr_s_largest(int a[], int N) //second largest in array
{
    return arr_largest(a,N-1);
}
int main()
{
    int N;
    printf("Enter size of array\n");
    scanf("%d",&N);

    int a[N];
    input(a,N);

    printf("Largest = %d\n",arr_largest(a,N));
    printf("Second largest = %d\n",arr_s_largest(a,N));

    return 0;
}
