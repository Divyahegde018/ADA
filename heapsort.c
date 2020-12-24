#include<stdio.h>
void hsort(int a[],int n);
void maxheap(int a[],int root,int bottom);
void main()
{
 int a[10],n,i;
 printf("enter value of n\n");
 scanf("%d",&n);
 printf("enter %d elements\n",n);
 for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 } 
 hsort(a,n);
 printf("sorted array\n");
 for(i=0;i<n;i++)
{
 printf("%d ",a[i]);
 }
}
void hsort(int a[],int n){
 int i;
 int temp;
 for(i=n-1;i>=0;i--)
	maxheap(a,i,n-1);
 for(i=n-1;i>=1;i--){
  temp=a[0];
  a[0]=a[i];
  a[i]=temp;
  maxheap(a,0,i-1);
}
}
void maxheap(int a[],int root,int bottom){
 int maxchild,temp,done=0;
 while((root*2<=bottom) && (!done)){
 	if(root*2==bottom)
 		maxchild=root*2;
	else if(a[root*2]>a[root*2+1])
		maxchild=root*2;
 	else 
		maxchild=root*2+1;
   	if(a[root]<a[maxchild])
	{
		temp=a[root];
		a[root]=a[maxchild];
		a[maxchild]=temp;
		root=maxchild;
	}
	else
		done=1;
 }
}
