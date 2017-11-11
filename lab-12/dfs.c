/// PROGRAM TO PRINT DFS TRAVERSAL FROM GIVEN SOURCE VERTEX

#include <stdio.h>
#include <stdlib.h>

/// We are going to define some global variables as it involves recursion
/// Variable to hold the number of vertices
int v = 0;

/// Variable to hold the graph as matrix
int m[10][10];

/// Variable to hold source vertex
int source;

/// Array to maintain the visited vertices
int visited[10];

/*
Funtion Name: dfs
Input Params: Graph input as matrix, number of vertices and source vertex
Return Type:  void
Description:  performs dfs traversal on the given graph
*/
void dfs(int m[10][10], int v, int source)
{
    /// Temporary variable
    int i;

    /// Mark the source vertex as visited
    visited[source] = ;

    for(i=0; i<v; i++)
    {
        if()
        {
            printf("%d\t", i);
            dfs(, ,);
        }
    }
}

int main()
{
    /// Index variables
    int i, j;

    /// File pointer to read input from the file
    FILE * fp;
    fp = fopen("input.txt", "r");

    /// Handle the file open error
    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return 0;
    }

    /// Read the number of vertices from file
    fscanf(fp,"%d", &v);

    /// Read the matrix from file
     for(i=0; i < v; i++)
        for (j=0; j<v; j++)
            fscanf(fp, "%d ", &m[i][j]);

    /// Read the source vertex from file
    fscanf(fp,"%d", &source);

    fclose(fp);

    /// Set all the vertices to not visited
    for (i= 0; i < v; i ++)
        visited[i] = ;

    /// Call the dfs traversal
    printf("The DFS Traversal is... \n");
    printf("%d\t", source);
    dfs(m, v, source);

    return 0;
}
