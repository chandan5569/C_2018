#include<stdio.h>
int main()
{
int a[10]; int i,sum=0;
printf("enter the ten values");
for(i=0; i<=9; i++)
{
scanf("%d",&a[i]);
}
sum=a[9]-a[0];
printf("summation is %d",sum);
return 0;
}

