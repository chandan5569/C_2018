#include<stdio.h>
int main()
{int i,j,c;
for(i=1; i<=12; i++)
{for(j=1; j<=10; j++)
{ c=i*j;
printf("%d * %d = %d\t",i,j,c);

}
printf("\n");
}
return 0;
}
