#include<stdio.h>
int main()
{int i,x,y;
printf("enter the two numbers whose lcm is to be found");
scanf("%d%d",&x,&y);
for(i=1; i<=x*y; i++)
{ if(i%x==0 && i%y==0)
break;
}
printf("lcm is %d",i);
return 0;
}

