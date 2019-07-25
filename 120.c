#include<stdio.h>
int main()
{
int min,max,i;
printf("enter the minimum and maximum value");
scanf("%d%d",&min,&max);
printf("even numbers are");
for(i=min; i<=max; i++)
{
if(i%2==0)
printf(" %d \n",i);
}
printf("odd numbers are");
for(i=min; i<=max; i++)
{
if(i%2!=0)
printf(" %d \n",i);
}
return 0;
}
