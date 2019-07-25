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
z=z+y*y*y;
x=x/10;
}
if(m==z)
printf("armstrong number");
else
printf("not a armstorng");
return 0;
}
