#include<stdio.h>
int s[10],d[10],i,j,n,a[10][10],k,min,u,v;
void main()
{
 printf("enter no. of vertices\n");
 scanf("%d",&n);
 printf("enter adjacency matrix\n");
 for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
 scanf("%d",&a[i][j]);

 printf("enter source vertex\n");
 scanf("%d",&v);
 for(i=1;i<=n;i++)
{
 s[i]=0;
 d[i]=a[v][i];
} 
 s[v]=1;
 for(k=1;k<n;k++){
 min =999;
 for(i=1;i<=n;i++)
{
 if(s[i]==0 && d[i]<min)
 {
  	min=d[i];
	u=i;
}
}
s[u]=1;
for(i=1;i<=n;i++)
{
 if(d[i]>d[u]+a[u][i])
 	d[i]=d[u]+a[u][i];
 }
}
printf("shortest distance from vertex %d to all other vertex\n",v);
for(i=1;i<=n;i++)
{
 printf("%d->%d=%d\n",v,i,d[i]);
 }
}
