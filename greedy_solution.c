#include<stdio.h>
void main()
{
 int object,m,weight[10],profit[10],i,j,temp1,temp2;
 float p_w[10],temp,sum=0;
 printf("Enter the total objects: ");
 scanf("%d",&object);
 for(i=0;i<object;i++)
 {
 printf("Enter the profit of object %d: ",i+1);
 scanf("%d",&profit[i]);
 printf("enter the weight of object %d: ",i+1);
 scanf("%d",&weight[i]);
 }
 printf("Enter the Knapsack capacity: ");
 scanf("%d",&m);
 for(i=0;i<object;i++)
 {
 p_w[i]=(float)profit[i]/(float)weight[i];
 }
 printf("-----------------Data-set---------------\n");
 printf(" Object");
 for(i=1;i<=object;i++)
 {
 printf("\t %d",i);
 }
 printf("\n Profit");
 for(i=0;i<object;i++)
 {
 printf("\t %d",profit[i]);
 }
 printf("\n Weight");
 for(i=0;i<object;i++)
 {
 printf("\t %d",weight[i]);
 }
 printf("\n P/W");
 for(i=0;i<object;i++)
 {
 printf("\t %.2f",p_w[i]);
 }
 for(i=0;i<object-1;i++)
 {
 for(j=i+1;j<object;j++)
 {
 if(p_w[i]<p_w[j])
 {
 temp=p_w[j];
 p_w[j]=p_w[i];
 p_w[i]=temp;
 temp1=profit[j];
 profit[j]=profit[i];
 profit[i]=temp1;
 temp2=weight[j];
 weight[j]=weight[i];
 weight[i]=temp2;
 }
 }
 }
 printf("\n---------------after Arranging--------\n");
 printf("\n Object");
 for(i=1;i<=object;i++)
 {
 printf("\t %d",i);
 }
 printf("\n Profit");
 for(i=0;i<object;i++)
 {
 printf("\t %d",profit[i]);
 }
 printf("\n Weight");
 for(i=0;i<object;i++)
 {
 printf("\t %d",weight[i]);
 }
 printf("\n P/W");
 for(i=0;i<object;i++)
 {
 printf("\t %.2f",p_w[i]);
 }
 for(i=0;i<object;i++)
 {
 if(weight[i]>m)
 {
 break;
 }
 else
 {
 sum+=1*profit[i];
 m=m-weight[i];
 }
 }
 if(i<object)
 sum+=(((float)m)/weight[i])*profit[i];
 printf("\n--------------------------------------\n");
 printf("Final profit is %.2f \n",sum);
}
