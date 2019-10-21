// created by Whiplash99

/*
    WAP to find the mean, standard deviation and  of N values in an array.
 */
#include<stdio.h>
#include<math.h>

float mean=0,var=0,st=0;
void input(float a[], int N) //takes array input
{
    for(int i=0;i<N;i++)
    {
        printf("Enter a number\n");
        scanf("%f",&a[i]);
    }
}
void arr_mean(float a[], int N) //calculates mean
{
    for(int i=0;i<N;i++)
        mean+=a[i];
    mean/=N;
    printf("Mean = %f\n",mean);
}
void arr_varience(float a[], int N) //calculates varience
{
    for(int i=0;i<N;i++)
        var+=pow(mean-a[i],2);
    var/=N;
    printf("Varience = %f\n",var);
}
void arr_std_dev(float a[], int N) //calculates standard deviation
{
    st=sqrt(var);
    printf("Standard deviation = %f\n",st);
}
int main()
{
    int N;
    printf("Enter size of array\n");
    scanf("%d",&N);

    float a[N];
    input(a,N);

    arr_mean(a,N);
    arr_varience(a,N);
    arr_std_dev(a,N);

    return 0;
}
