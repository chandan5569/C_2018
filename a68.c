#include<stdio.h>
int main()
{
int x,y=1;
printf("enter the number");
scanf("%d",&x);
while(x>=1)
{
y=y*x;
x--;
}
printf("factorial is %d ",y);
return 0;
}
