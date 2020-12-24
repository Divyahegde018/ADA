#include<stdio.h>
int bsearch(int a[],int n,int key,int low,int high);
int main()
{
 int n,a[10],i,pos=-1,key;
 printf("enter no. of elements\n");
 scanf("%d",&n);
 printf("enter the elements\n");
 for(i=0;i<n;i++)
{ scanf("%d",&a[i]);
}
 printf("enter the key element\n");
 scanf("%d",&key);
 pos=bsearch(a,n,key,0,n-1);
 if(pos>=0)
 printf("key found at index %d\n",pos);
 else printf("search unsuccessful\n");
 return 0;
}
int bsearch(int a[],int n,int key,int low,int high)
{
 int mid;
 while(low<=high)
{
 mid=(low+high)/2;
 if(key==a[mid])
 return mid;
 else if(key<a[mid])
 return bsearch(a,n,key,low,mid-1);
 else if(key>a[mid])
 return bsearch(a,n,key,mid+1,high);
}
return -1;
} 
 
