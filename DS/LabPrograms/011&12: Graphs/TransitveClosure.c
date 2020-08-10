/*
 * Transitive Closure of a directed graph.
 * Transitive closure is simply the reach-ability matrix of a graph.
 * O(N^2), as printing the matrix will always take O(N^2).
 *
 * Vertices are numbered from 1 to N.
 * Input and output in the form of matrix.
 */

//created by Whiplash99
#include <stdio.h>
#include <stdlib.h>

int **graph;
void dfs(int i, int j , int **matrix, int N) //performs DFS on vertex i
{
    matrix[i][j]=1;

    for(int k=0;k<N;k++)
    {
        if(!matrix[i][k])
            dfs(i,k,matrix,N);
    }
}
void findTransitiveClosure(int **matrix, int N) //finds the transitive closure of a graph
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if (graph[i][j]&&!matrix[i][j])
                dfs(i, j, matrix, N);
        }
    }
}
void display(int **matrix, int N) //displays the reach-ability matrix
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            printf("%d ",matrix[i][j]);
        printf("\n");
    }
}
int main() //main method
{
    int N;

    printf("Enter the number of vertices\n");
    scanf("%d", &N);

    graph = (int **) malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) { graph[i] = (int *) malloc(N * sizeof(int)); }
    for (int i = 0; i < N; i++) { for (int j = 0; j < N; j++)graph[i][j] = 0; }

    printf("\nEnter the adjacency matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            scanf("%d", &graph[i][j]);
    }

    int **matrix = (int **) malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) matrix[i] = (int *) malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) { for (int j = 0; j < N; j++)matrix[i][j] = 0; }

    findTransitiveClosure(matrix, N);

    printf("\nTransitive closure of the graph:\n");
    display(matrix, N);


    return 0;
}
