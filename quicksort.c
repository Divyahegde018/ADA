#include<stdio.h>
void qsort(int a[],int low,int high);
int partition(int a[],int low,int high);
void main()
{
 int a[10],i,n;
 printf("enter no. of elements\n");
 scanf("%d",&n);
 printf("enter the elements\n");
 for(i=0;i<n;i++)
 {
 	scanf("%d",&a[i]);
 }
 qsort(a,0,n);
 printf("sorted array :\n");
 for(i=0;i<n;i++){
  printf("%d ",a[i]);  
 }
}
void qsort(int a[],int low,int high)
{
 	int k;
	if(low<high)
	{
		k=partition(a,low,high);
		qsort(a,low,k-1);
		qsort(a,k+1,high);
	}
}
int partition(int a[],int low,int high)
{
 	int pivot=a[low];
	int i=low;
	int j=high+1;
 	int temp;
	while(i<j)
	{
		do i++;
		while(pivot>a[i]);
		do j--;
		while(pivot<a[j]);
		if(i<j)
		{
 			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		else break;
	}
	temp=a[low];
	a[low]=a[j];
	a[j]=temp;
 	
	return j;
}


