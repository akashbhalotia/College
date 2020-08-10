/*
 * Find the transpose of a matrix.
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
void transpose(int **a, int **t, int R, int C) //transposes a matrix
{
    for(int i=0;i<C;i++)
        for(int j=0;j<R;j++)
            t[i][j]=a[j][i];
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
    int R,C;

    printf("Enter the dimensions of the matrix\n");
    scanf("%d%d",&R,&C);

    int **a=(int **)malloc(R*sizeof(int*));
    for(int i=0;i<R;i++)
        a[i]=(int*)malloc(C* sizeof(int));
    printf("\nEnter matrix:\n");
    input(a,R,C);

    int **t=(int **)malloc(C*sizeof(int*));
    for(int i=0;i<C;i++)
        t[i]=(int*)malloc(R* sizeof(int));

    printf("\nMatrix entered:\n");
    display(a,R,C);

    transpose(a,t,R,C);
    printf("Transposed matrix:\n");
    display(t,C,R);

    return 0;
}
