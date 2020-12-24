#include<stdio.h>
int c[10][10],visited[10],i,j,n;
void prims(){
int min,a,b,cost=0,count=0;

visited[1]=1;
while(count<n-1)
{
 min=999;
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
	if(visited[i] && !visited[j] && min>c[i][j])
	{
		min=c[i][j];
		a=i;
		b=j;
}
printf("%d->%d=%d\n",a,b,c[a][b]);
visited[b]=1;
cost+=c[a][b];
count++;
}
printf("minimum cost=%d\n",cost);
}
void main()
{
 printf("enter no. of vertices\n");
 scanf("%d",&n);
 printf("enter adjacency matrix\n");
 for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
	 scanf("%d",&c[i][j]);
 visited[i]=0;
}
prims();
}
