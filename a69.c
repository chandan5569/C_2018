#include<stdio.h>
int main()
{
int x,y,z=0,m;
printf("enter the number");
scanf("%d",&x);
m=x;
while(x!=0)
{
y=x%10;
z=z*10+y;
x=x/10;
}
if(z==m)
printf("it is pallindrom");
else
printf("not a pallindrom");
return 0;
}
