#include<stdio.h>
int main()
{
int x,y,i,z=0;
printf("enter the two numbers");
scanf("%d%d",&x,&y);
for(i=1; i<=y; i++)
{
z=z+x;
}
printf("multiplication is %d ",z);
return 0;
}


