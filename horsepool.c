#include<stdio.h>
#include<string.h>
int table[1000];
void shifttable(char p[])
{
 int i;
 int len=strlen(p);
 for(i=0;i<1000;i++)
  table[i]=len;
 for(i=0;i<len-1;i++)
  table[p[i]]=len-1-i;
 }
int horsepool(char p[],char t[])
{
  int m,n,k,i;
  m=strlen(p);
  n=strlen(t);
  shifttable(p);
  i=m-1;
  while(i<=n-1)
{
  k=0;
  while(k<=m-1 && p[m-1-k]==t[i-k])
	k+=1;
  if(k==m)
 	return i-m+1;
  else
 	i+=table[t[i]];
 }
  return -1;
}
void main()
{
 char txt[50],pttrn[50];
 int res;
 printf("enter text\n");
 fgets(txt,sizeof(txt),stdin);
 printf("enter pattern\n");
 fgets(pttrn,sizeof(pttrn),stdin);
 res=horsepool(pttrn,txt);
 if(res==-1)
   printf("pattern not found\n");
 else
   printf("pattern found at text index %d\n",res);
 }

