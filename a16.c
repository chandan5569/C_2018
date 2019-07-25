#include<stdio.h>
int main()
{int x,y,s,z;
printf("enter the values");
scanf("%d%d",&x,&y);
printf("enter 1 for addition,enter 2 for subtraction,enter 3 for multiplication,enter 4 for division");
scanf("%d",&s);
switch(s)
{case 1:
z=x+y;
printf("%d",z);
break;
case 2:
z=x-y;
printf("%d",z);
break;
case 3: z=x*y;
printf("%d",z);
break;
case 4: z=x/y;
printf("%d",z);
break;
default:
printf("wrong choice");
}
return 0;
}
