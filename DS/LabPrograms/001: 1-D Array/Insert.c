/*
 * Insert an element in an array of N elements.
 * (In a specific position).
 */

//created by Whiplash99
#include <stdio.h>
#include <stdlib.h>

void input(int *a, int N) //takes input
{
    for(int i=0;i<N;i++)
    {
        printf("Enter a number\n");
        scanf("%d",(a+i));
    }
}
int check(int pos, int N){ return 0<=pos&&pos<=N;} //checks if it is a valid position
void insert(int a[], int *N, int val, int pos) //inserts an element in the array
{
    *N+=1;
    a=(int *)realloc(a,(*N)*(sizeof(int*)));

    for(int i=*N;i>pos;i--)
        a[i]=a[i-1];
    a[pos]=val;
}
void display(int a[], int N) //displays elements of the array
{
    for(int i=0;i<N;i++)
        printf("%d,",a[i]);
    printf("\n\n");
}
int main() //main method
{
    int N,val,pos;

    printf("Enter the size of the array\n");
    scanf("%d",&N);

    int *a=(int*)malloc(N*sizeof(int*));
    input(a,N);

    printf("Enter a number to insert into array\n");
    scanf("%d",&val);

    printf("Enter the position (0 to %d) to insert to\n",N);
    scanf("%d",&pos);

    if(!check(pos,N))
    {
        printf("Invalid position!\n");
        exit(0);
    }

    printf("\nArray before insertion:\n");
    display(a,N);

    insert(a,&N,val,pos);

    printf("Array after insertion:\n");
    display(a,N);

    return 0;
}
