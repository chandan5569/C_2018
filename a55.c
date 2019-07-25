#include<stdio.h>
int main()
{
int i,j; char ch;
for(i=1; i<=4; i++)
{ ch='A';
for(j=1; j<=4; j++)
{if(j<=i)
{printf("%c",ch);
j<3?ch++:ch--;}
else
printf(" ");
}
printf("\n");
}
return 0;
}
