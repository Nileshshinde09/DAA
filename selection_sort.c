#include<stdio.h>
void main()
{
 int n,a[20],i,j,min,temp;
 printf("Enter the size of array ");
 scanf("%d",&n);
 printf("Enter the elements \n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n-1;i++)
 {
 min=i;
 for(j=i+1;j<n;j++)
 {
 if(a[min]>a[j])
 min=j;
 }
 temp=a[i];
 a[i]=a[min];
 a[min]=temp;
 }
 printf("Sorted elements are \n");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
}
