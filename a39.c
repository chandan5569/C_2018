#include<stdio.h>
int main()
{int i,j;
for(i=1; i<=4; i++)
{ for(j=1; j<=4; j++)
{ if(j<=i)
{if(j%2==0)
printf("!");
else
printf("*");
}
else
printf(" ");
}
printf("\n");
}
return 0;
}

