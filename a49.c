#include<stdio.h>
int main()
{int x;
printf("enter the year");
scanf("%d",&x);
if(x%4==0)
printf("leap year");
else
printf("not a leap year");
return 0;
}
