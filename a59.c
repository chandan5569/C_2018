#include<stdio.h>
int main()
{int a=0,b=1,c,n,i;
printf("enter the value of last number upto which series is to be found");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
return 0;
}
