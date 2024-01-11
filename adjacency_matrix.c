#include <stdio.h>
void main()
{
 int n,m,i,j,arr[10][2],adj[10][10],x,y;
 printf("enter the number of Vertices : ");
 scanf("%d",&n);
 printf("Enter the number of edges :");
 scanf("%d",&m);
 for (i = 0; i < m ; i++)
 {
 printf("Enter the edge %d : ",i+1);
 scanf("%d%d",&arr[i][0],&arr[i][1]);
 }
 for (i = 0; i < n ; i++)
 for (j = 0; j < n ; j++)
 adj[i][j] = 0;
 for (i = 0; i < m; i++)
 {
 x = arr[i][0];
 y = arr[i][1];
 adj[x-1][y-1] = 1;
 adj[y-1][x-1] = 1;
 }
 printf("Adjacency matrix is : \n");
 for (i = 0; i < n ; i++)
 {
 for (j = 0; j < n ; j++)
 printf("%d ", adj[i][j]);
 printf("\n");
 }
}
