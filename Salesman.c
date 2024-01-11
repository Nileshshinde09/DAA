#include<stdio.h>
int tspdp();
void main()
{
 int n,c[10][10],tour[10],i, j,cost;
 printf("Enter No. of Cities: ");
 scanf("%d",&n);
 printf("Enter the Cost Matrix: \n");
 for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
 scanf("%d",&c[i][j]);
 for(i=1;i<=n;i++)
 tour[i]=i;
 cost = tspdp(c, tour, 1, n);
 printf("The Optimal Tour is: \n");
 for(i=1;i<=n;i++)
 printf("%d ->",tour[i]);
 printf("1");
 printf("\nMinimum Cost: %d \n ",cost);
}
int tspdp(int c[10][10], int tour[], int start, int n)
{
 int mintour[10], temp[10], mincost=999,ccost, i, j, k;
 if(start == n-1)
 {
 return (c[tour[n-1]][tour[n]] + c[tour[n]][1]);
 }
 for(i=start+1; i<=n; i++)
 {
 for(j=1; j<=n; j++)
 temp[j] = tour[j];
 temp[start+1] = tour[i];
 temp[i] = tour[start+1];
 if((c[tour[start]][tour[i]]+(ccost=tspdp(c,temp,start+1,n)))<mincost)
 {
 mincost = c[tour[start]][tour[i]] + ccost;
 for(k=1; k<=n; k++)
 mintour[k] = temp[k];
 }
 }
 for(i=1; i<=n; i++)
 tour[i] = mintour[i];
 return mincost;
}
