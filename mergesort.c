#include<stdio.h>
void msort(int a[],int low,int high);
void merge(int a[],int low,int mid,int high);
void main()
{
 int a[10],n,i;
 printf("enter the value of n\n");
 scanf("%d",&n);
 printf("enter the elements\n");
 for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 }
 msort(a,0,n-1);
 printf("sorted array:\n");
 for(i=0;i<n;i++)
{
 printf("%d ",a[i]);
}
}
void msort(int a[],int low,int high)
{
	int mid;
	if(low<high){
 		mid=(low+high)/2;
		msort(a,low,mid);
		msort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
void merge(int a[],int low,int mid,int high)
{
	int i,j,k,h,b[10];
	i=h=low;
	j=mid+1;
	while(h<=mid && j<=high){
 		if(a[h]<=a[j]){
			b[i]=a[h];
			h+=1;
		}
		else{
			b[i]=a[j];
			j+=1;
		}
		i+=1;
	}
	if(h>mid){
		for(k=j;k<=high;k++)
		{
			b[i]=a[k];
			i+=1;
		}
	}
 	else {
 		for(k=h;k<=mid;k++)
		{
			b[i]=a[k];
			i+=1;
		}
	}
	for(k=low;k<=high;k++)
	{
		a[k]=b[k];
	}
}
