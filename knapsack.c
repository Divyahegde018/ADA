#include<stdio.h>
int p[10],w[10],i,j,capacity,n,v[50][50],maxprofit;
void knapsack();
int max(int a,int b)
{
 return (a>b)?a:b;
}
void main()
{
  printf("enter no. of objects\n");
 scanf("%d",&n);
 printf("enter weight and profit of %d objects\n",n);
 for(i=1;i<=n;i++)
{
 printf("object %d weight:\n",i);
 scanf("%d",&w[i]);
 printf("profit:\n");
 scanf("%d",&p[i]);
}
 printf("enter capacity\n");
 scanf("%d",&capacity);
 knapsack();
 }
void knapsack(){ 
 for(i=0;i<=n;i++)
{
 for(j=0;j<=capacity;j++)
{
 if(i==0||j==0)
	v[i][j]=0;
 else if(w[i]>j)
	v[i][j]=v[i-1][j];
 else
	v[i][j]=max(v[i-1][j],v[i-1][j-w[i]]+p[i]);
 maxprofit=v[i][j];
}
}
printf("maximum profit is %d\n",maxprofit);
}

