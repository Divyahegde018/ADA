#include<stdio.h>
void warshall(int a[][10],int n){
 int i,j,k;
for(k=1;k<=n;k++)
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
    a[i][j]=(a[i][j]||a[i][k]&&a[k][j]);
 }
void main()
{
 int i,j,n,a[10][10];
 printf("enter no. of vertices\n");
 scanf("%d",&n);
 printf("enter adjacency matrix\n");
 for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
  scanf("%d",&a[i][j]);
 }

warshall(a,n);
printf("transitive closures\n");
 for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
{
 printf("%d ",a[i][j]);
 }
 printf("\n");
}
}
