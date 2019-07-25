#include<stdio.h>
int main()
{int x,y,z;
printf("enter the values");
scanf("%d%d",&x,&y);
z=x;
x=y;
y=z;
printf("swapping of numbers is%d %d",x,y);
return 0;
}

