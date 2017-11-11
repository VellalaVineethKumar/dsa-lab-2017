/// PROGRAM TO PRINT BFS TRAVERSAL FROM GIVEN SOURCE VERTEX

#include <stdio.h>
#include <stdlib.h>

/*
Funtion Name: bfs
Input Params: Graph input as matrix, number of vertices and source vertex
Return Type:  void
Description:  performs bfs traversal on the given graph
*/
void bfs(int m[10][10], int v, int source)
{
    /// A queue will be used during the traversal
    int queue[20];
    int front = ;
    int rear = ;

    /// Temporary variables
    int u;
    int i;

    /// Array to maintain the visited vertices
    int visited[10];

    /// Set all the vertices to not visited
    for (i= 0; i < v; i ++)
        visited[i] = ;

    /// Initilaize the queue with source and mark it visited
    queue[rear] = ;
    visited[source] = ;

    printf("The BFS Traversal is... \n");

    /// Until the queue is empty
    while (front <= rear)
    {
        /// Pick the vertex from queue front
        /// This is also when we mark the traversal and print it
        u = ;
        printf("%d\t", u);
        front =

        /// All the vertices that are reachable from considered vertex
        /// and not yet visited,
        /// Mark them as visited and Add them to queue
        for(i=0;i<v;i++)
        {
            if(m[u][i] == 1 && visited[i] == 0)
            {
                visited[i] = ;
                rear = ;
                queue[rear] = ;
            }
        }
    }
}

int main()
{
    /// Variable to hold the number of vertices
    int v = 0;

    /// Variable to hold the graph as matrix
    int m[10][10];

    /// Variable to hold source vertex
    int source;

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

    /// Call the bfs traversal
    bfs(m, v, source);

    return 0;
}
