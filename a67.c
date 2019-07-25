#include<stdio.h>
int main()
{
int max,min,i;
printf("enter the maximium and minimum range");
scanf("%d%d",&min,&max);
for(i=min; i<=max; i++)
{
printf(" %d ", i);
}
return 0;
}
