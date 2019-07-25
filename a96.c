#include<stdio.h>
int main()
{
int a[50],i,x,n;
printf("enter the number of element");
scanf("%d",&n);
printf("enter the elements");
for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
}
for(i=0; i<n; i++)
{
x=a[i];
a[i]=a[n-1-i];
a[n-1-i]=x;
}
printf("swapping is \n");
for(i=0; i<n; i++)
{
printf(" %d ",a[n-1-i]);
}
return 0;
}
