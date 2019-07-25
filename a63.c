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
printf("prime number");
else
printf("not a prime number"); 
return 0;
}
