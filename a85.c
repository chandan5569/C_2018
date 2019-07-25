#include<stdio.h>
int main()
{
int a[10],i,x,count=0;
printf("enter the elements in array");
for(i=0; i<=9; i++)
{
scanf("%d",&a[i]);
}
printf("enter the number to be checked");
scanf("%d",&x);
for(i=0; i<=9; i++)
{
if(x==a[i])
count++;
}
if(count==1)
printf("it is in array");
else
printf("not in array");
return 0;
}
