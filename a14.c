#include<stdio.h>
void main()
{
int x,y,z,s;
printf("enter the values");
scanf("%d%d",&x,&y);
printf("enter 1 for addition, enter 2 for subtraction");
scanf("%d",&z);
switch(z)
{case 1:
s=x+y;
printf("%d",s);
break;
case 2:
s=x-y;
printf("%d",s);
break;
default:
printf("wrong choice");
}
}
