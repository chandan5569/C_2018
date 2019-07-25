#include<stdio.h>
int main()
{
int a[50],i,position,x,y,n;
printf("enter the number of array of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
}
printf("enter the location from where we have to delete the elements");
scanf("%d",&position);
y=position-1;
for(i=y; i<n-1; i++)
{
a[i]=a[i+1];
}
printf("---------resultant array is--------------------");
for(i=0; i<n-1; i++)
{
printf(" %d ",a[i]);
}
return 0;
} 
