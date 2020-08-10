/*
 * Matrix Multiplication
 */

//created by Whiplash99
#include <stdio.h>
#include <stdlib.h>

int isPossible(int C1, int R2){ return C1==R2;} //checks if it's possible to multiply them
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
void init(int **a, int R, int C) //fills the array with 0s
{
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            a[i][j]=0;
}
void multiply(int **a, int **b, int**c, int R, int M, int C) //multiples two matrices
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            for(int k=0;k<M;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    }
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
    int R1,C1,R2,C2;

    printf("Enter the dimensions of matrix A\n");
    scanf("%d%d",&R1,&C1);
    printf("Enter the dimensions of matrix B\n");
    scanf("%d%d",&R2,&C2);

    if(!isPossible(C1,R2))
    {
        printf("Matrices cannot be multiplied\n");
        exit(0);
    }

    int **a=(int **)malloc(R1*sizeof(int*));
    for(int i=0;i<R1;i++)
        a[i]=(int*)malloc(C1* sizeof(int));
    printf("\nMatrix A:\n");
    input(a,R1,C1);

    int **b=(int **)malloc(R2*sizeof(int*));
    for(int i=0;i<R2;i++)
        b[i]=(int*)malloc(C2* sizeof(int));
    printf("\nMatrix B:\n");
    input(b,R2,C2);

    int **c=(int **)malloc(R1*sizeof(int*));
    for(int i=0;i<R1;i++)
        c[i]=(int*)malloc(C2* sizeof(int));
    init(c,R1,C2);

    printf("\nMatrix A:\n");
    display(a,R1,C1);

    printf("Matrix B:\n");
    display(b,R2,C2);

    multiply(a,b,c,R1,C1,C2);
    printf("Resultant matrix:\n");
    display(c,R1,C2);

    return 0;
}
