#include<stdio.h>
int parent[10],n,x,y,min,i,j,c[10][10],flag;
void findmin();
int checkcycle(int x,int y);
void main()
{
 int count,total=0;
 printf("enter no. of vertices\n");
 scanf("%d",&n);
 printf("enter adjacency matrix\n");
 for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
  scanf("%d",&c[i][j]);
 
 count=0;
 while(count!=n-1 && min!=999)
{
 findmin();
 flag=checkcycle(x,y);
 if(flag==1){
 	printf("%d->%d=%d\n",x,y,c[x][y]);
	count++;
	total+=c[x][y];
	}
 c[x][y]=c[y][x]=999;
}
printf("minimum spanning cost=%d\n",total);
}

void findmin(){
 min=999;
 for(i=1;i<=n;i++)
 { 
	for(j=1;j<=n;j++){
		if(min>c[i][j]){
			min=c[i][j];
			x=i;
			y=j;
 }
}
}
}
int checkcycle(int x,int y)
{
 if(parent[x]==parent[y] && parent[x]!=0)
 	return 0;
 else if(parent[x]==parent[y]==0)
	parent[x]=parent[y]=x;
 else if(parent[x]==0)
	parent[x]=parent[y];
 else if(parent[x]!=parent[y])
	parent[y]=parent[x];
 return 1;
}

