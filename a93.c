#include<stdio.h>
int main()
{
int a[50],i,position,x,n,y;
printf("enter the number of elements in array");
scanf("%d",&n);
printf("enter the elements");
for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
}
printf("enter the location where we have to insert the elements");
scanf("%d",&position);
printf("enter the element to be inserted");
scanf("%d",&x);
y=position-1;
for(i=n-1; i>=y; i--)
{
a[i+1]=a[i];
}
a[y]=x;
printf("resultant array is");
for(i=0; i<=n; i++)
{
printf(" %d ",a[i]);
}
return 0;
}
