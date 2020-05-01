#include<stdio.h>
int main()
{
int a,b,c,l,m,s;
printf("enter the three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
l=a;
if(b>c)
{
m=b;
s=c;
}
else
{
m=c;
s=b;
}
}
else if(b>a && b>c)
{
l=b;
if(a>c)
{
m=a;
s=c;
}
else
{
m=c;
s=a;
}
}else
{
l=c;
if(a>b)
{
m=a;
s=b;
}
else
{
m=b;
s=a;
}
}
printf(" %d %d %d ",s,m,l);
return 0;
}
