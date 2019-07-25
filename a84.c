#include<stdio.h>
int main()
{
int a[10];
int sum=0,i;
printf("enter the elements");
for(i=0; i<=9; i++)
{
scanf("%d",&a[i]);
}
for(i=0; i<=9; i++)
{
sum=sum+a[i]*a[i];
}
printf("summation is %d",sum);
return 0;
}

