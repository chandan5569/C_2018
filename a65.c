#include<stdio.h>
int main()
{
int x,i,count=0;
printf("enter the number");
scanf("%d",&x);
for(i=1; i<=x; i++)
{
if(x%i==0)
count++;
}
if(count==2)
printf("number is prime");
else
printf("not a prime");
return 0;
}

