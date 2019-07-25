#include<stdio.h>
int main()
{
int i,x;
printf("enter the last value");
scanf("%d",&x);
for(i=1; i<=x; i+=2)
{
printf(" %d ",i);
}
return 0;
}
