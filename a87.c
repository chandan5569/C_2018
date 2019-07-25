#include<stdio.h>
int main()
{
int a[10],i,max,min,sum;
printf("enter the elements");
for(i=0; i<=9; i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0; i<=9; i++)
{
if(a[0]<a[i])
{
max=a[i];
}
}
printf("\nmaximum element is %d",max);
min=a[0];
for(i=0; i<=9; i++)
{
if(a[0]>a[i])
{
min=a[i];
}
}
printf("\nminimum element is %d",min);
sum=max+min;
printf("\nsummation is %d",sum);
return 0;
}
