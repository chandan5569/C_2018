#include<stdio.h>
void swap(int,int);
int main()
{
int x,y;
printf("enter two numbers");
scanf("%d%d",&x,&y);
swap(x,y);
return 0;
}
void swap(int a,int b)
{
int z;
z=a;
a=b;
b=z;
printf("%d,%d",a,b);
}
