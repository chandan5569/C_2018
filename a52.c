#include<stdio.h>
int main()
{
int x,y,z;
printf("enter the three numbers");
scanf("%d%d%d",&x,&y,&z);
if(x>y && x>z)
printf("the largest numbers is %d",x);
else if(y>x && y>z)
printf("the largest numbers is %d",y);
else
printf("the largest numbers is %d",z);
return 0;
}
