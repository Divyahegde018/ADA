#include<stdio.h>
int a[10][10],reach[20],v,n;
void dfs(int v){
	int i;
	reach[v]=1;
	for(i=1;i<=n;i++)
	{
		if(a[v][i] && !reach[i]){
			printf("\n%d->%d\n",v,i);
 			dfs(i);
		}
	}
}
void main()
{
  int i,j;
  printf("enter n0. of vertices\n");
  scanf("%d",&n);
  printf("enter adjacency matrix\n");
  for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
		scanf("%d",&a[i][j]);
		
  for(i=1;i<=n;i++)
 {
  reach[i]=0;
 }
 printf("enter source vertex\n");
 scanf("%d",&v);
 printf("dfs output:\n");
 dfs(v);
}


