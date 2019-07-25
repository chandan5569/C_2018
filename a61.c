#include<stdio.h>
int main()
{ int x,y;
printf("enter the number");
scanf("%d",&x);
while(x!=0)
{ y=x%10;
printf("%d",y);
x=x/10;
}
return 0;
}
