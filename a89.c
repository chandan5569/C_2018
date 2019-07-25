#include<stdio.h>
int main()
{
int a[20],i,j,n,x,y;
printf("enter the number of element");
scanf("%d",&n);
printf("enter the elements");
for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
}
for(i=0; i<n-1; i++)
{
for(j=0; j<n-1-i; j++)
{
if(a[j]>a[j+1])
{
x=a[j];
a[j]=a[j+1];
a[j+1]=x;
}
}
}
y=a[n-2];
printf("second largest number is %d ",y);
return 0;
}
