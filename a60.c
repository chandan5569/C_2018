#include<stdio.h>
int main()
{
qint i,j,x=0,y=0;
for(i=1; i<=6; i++)
{
y=x+i;
for(j=1; j<=11; j++)
{ if(j>=7-i && j<=5+i)
{ printf("%d",x);
j<6?x++:x--;
}
else
printf(" ");
}
printf("\n");
}
return 0;
}
