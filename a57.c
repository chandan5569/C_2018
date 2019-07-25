#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,x,y,d;
printf("enter the value of three numbers");
scanf("%f%f%f",&a,&b,&c);
d=b*b-4*a*c;
if(d<0)
printf("imaginary roots");
else if(d>0)
{x=-b+sqrt(d)/2*a;
y=-b-sqrt(d)/2*a;
printf("the roots are %f , %f",x,y);}
else
printf("equal roots %f=%f",x,y);
return 0;
}

