#include<stdio.h>
int main()
{float i,x=0; float n;
printf("enter the last number");
scanf("%f",&n);
for(i=1; i<=n; i++);
{

x=x+(1/i);

}
printf("%f",x);
return 0;
}
