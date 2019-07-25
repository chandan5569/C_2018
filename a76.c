#include<stdio.h>
int main()
{
int x,y,z,i;
printf("enter the two values");
scanf("%d%d",&x,&y);
for(i=0; i<=y; i++)
{
z=x++;
}
printf("sum is %d",z);
return 0;
}
