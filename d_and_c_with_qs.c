#include<stdio.h>
int partition(int a[],int low,int high)
{
 int p,i,j,temp;
 p=a[low];
 i=low+1;
 j=high;
 while(low<high)
 {
 while(a[i]<p&&i<high)
 i++;
 while(a[j]>p)
 j--;
 if(i<j)
 {
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 }
 else
 {
 temp=a[low];
 a[low]=a[j];
 a[j]=temp;
 return j;
 }
 }
 return j;
}
void sort(int a[],int low,int high)
{
 int s;
 if(low<high)
 {
 s=partition(a,low,high);
 sort(a,low,s-1);
 sort(a,s+1,high);
 }
}
void main()
{
 int a[20],i,n;
 printf("enter the array size ");
 scanf("%d",&n);
 printf("Enter the elements \n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 sort(a,0,n-1);
 printf("sorted array is \n");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
}