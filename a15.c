#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,s;
 float A;
printf("enter the value of sides of triangle and the value of s");
scanf("%f%f%f%f",&a,&b,&c,&s);
s=a+b+c/2;
A=sqrt(s*(s-a)*(s-b)*(s-c));
printf("%f",A);

return 0;}
