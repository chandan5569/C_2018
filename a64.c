#include<stdio.h>
int main()
{
int i,x;
printf("enter the number");
scanf("%d",&x);
for(i=1; i<=x; i++)
{
if(x%i==0)
{printf("factors are %d",i);
printf("\n");}
}
return 0;
}
