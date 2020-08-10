/*
 * Checks if a matrix is lower triangular.
 * Triangular matrix is always a square matrix.
 * In a lower triangular matrix, all elements above
 * the principal diagonal are 0.
 */

//created by Whiplash99
#include <stdio.h>
#include <stdlib.h>

void input(int **a, int R, int C) //takes input
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            printf("Enter a number\n");
            scanf("%d", &a[i][j]);
        }
    }
}
int check(int **a, int N) //checks whether the matrix is lower triangular
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i<j&&a[i][j])
                return 0;
        }
    }
    return 1;
}
void display(int **a, int R, int C) //displays the elements of a matrix
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("\n");
}
int main() //main method
{
    int N;

    printf("Enter the size of the matrix\n");
    scanf("%d",&N);

    int **a=(int **)malloc(N*sizeof(int*));
    for(int i=0;i<N;i++)
        a[i]=(int*)malloc(N* sizeof(int));
    printf("\nEnter matrix:\n");
    input(a,N,N);

    printf("\nMatrix entered:\n");
    display(a,N,N);

    printf(check(a,N)?"Lower triangular matrix\n":"Not lower triangular\n");

    return 0;
}
