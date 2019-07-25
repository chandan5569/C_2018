#include<stdio.h>
void sort(int a[],int);
int main()
{
int a[100],n,i;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter those elements");
for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
}
sort(a,n);
for(i=0; i<n; i++)
{
printf(" %d ",a[i]);
}
return 0;
}
void sort(int b[],int m)
{
int x,i,j;
for(i=0; i<m-1; i++)
{
for(j=0; j<m-1-i; j++)
{
if(b[j]>b[j+1])
{
x=b[j];
b[j]=b[j+1];
b[j+1]=x;
}
}
}
}
