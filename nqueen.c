#include<stdio.h>
#include<math.h>
int x[100],count=0,n;
int place(int k,int i)
{
 int j;
 for(j=1;j<k;j++)
 if((x[j]==i)||(abs(x[j]-i)==abs(j-k)))
	return 0;
 return 1;
}
void nqueen(int k,int n){ 
 int i,j,p;
 for(i=1;i<=n;i++)
 if(place(k,i))
{
 x[k]=i;
 if(k==n){
 count++;
 for(j=1;j<=n;j++)
 {
  for(p=1;p<=n;p++)
 
  if(x[j]==p) printf(" q ");
  else printf(" 0 ");
  
 printf("\n");
}
}
else
 nqueen(k+1,n);
}
printf("\n");
}
void main(){
 printf("enter n0. of queens\n");
 scanf("%d",&n);
 nqueen(1,n);
 if(count==0)
	printf("no.solution\n");
 else
        printf("no. of solution=%d\n",count);
}

