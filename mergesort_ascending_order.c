#include<stdio.h>
int a[20];
void merge(int a[],int low,int mid,int high)
{
 int h,i,j,k,b[20];
 h=i=low;
 j=mid+1;
 while( (h<=mid) && (j<=high) )
 if(a[h]<a[j])
 b[i++]=a[h++];
 else
 b[i++]=a[j++];
 if(h>mid)
 for(k=j;k<=high;k++)
 b[i++]=a[k];
 else
 for(k=h;k<=mid;k++)
 b[i++]=a[k];
 for(k=low;k<=high;k++)
 a[k]=b[k];
}
void mergesort(int a[],int low,int high)
{
 int mid;
 if(low<high)
 {
 mid=(low+high)/2;
 mergesort(a,low,mid);
 mergesort(a,mid+1,high);
 merge(a,low,mid,high);
 }
}
void main()
{
 int n,i;
 printf("Enter the size of array: ");
 scanf("%d",&n);
 printf("Enter the elements \n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 mergesort(a,0,n-1);
 printf("Sorted elements are \n");
 for(i=0;i<n;i++)
 printf("%d \n",a[i]);
}