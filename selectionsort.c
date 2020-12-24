#include<stdio.h>
void selection(int a[],int n)
{
 int min,temp,i,j;
 for(i=0;i<n-1;i++)
 {
	min=i;
 	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[min])
			min=j;
	}
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;
}      
}
void main()
{
 int i,n,a[10];
 printf("enter no. of elements\n");
 scanf("%d",&n);
 printf("enter the elements\n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 selection(a,n);
 printf("after sorting\n");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 } 

