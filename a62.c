#include<stdio.h>
int main()
{
int x,y,sum=0;
printf("enter the digit");
scanf("%d",&x);
while(x!=0)
{ y=x%10;
sum=sum+y;
printf("%d",sum);
x=x/10;
}
return 0;
}

