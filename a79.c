#include<stdio.h>
int main()
{
int a[5],i,max,min;
printf("enter the five values");
for(i=0; i<=4; i++)
{
scanf("%d",&a[i]);
}
if(a[i]>max)
{
a[i]=max;
printf("maximum value is %d",a[i]);
}
else
{a[i]=min;
printf("minimum value is %d",a[i]);
}
return 0;
}
