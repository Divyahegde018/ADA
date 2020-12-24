#include<stdio.h>
int a[10][10],visited[20],q[20],i,j,r=-1,f=0,v,n;
void bfs(int v)
{
 for(i=1;i<=n;i++){
 	if(a[v][i] && !visited[i]){
		printf("\n%d->%d\n",v,i);
		q[++r]=i;
 		}
	}
 if(f<=r)
{
 visited[q[f]]=1;
 bfs(q[f++]);
	}
}
void main()
{
  printf("enter n0. of vertices\n");
  scanf("%d",&n);
  printf("enter adjacency matrix\n");
  for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
		scanf("%d",&a[i][j]);
		
  for(i=1;i<=n;i++)
 {
  q[i]=0;
  visited[i]=0;
 }
 printf("enter source vertex\n");
 scanf("%d",&v);
 bfs(v);
 printf("reachable vertices are\n");
 for(i=1;i<=n;i++)
{
 if(visited[i])
  printf("%d ",i);
 }
}


