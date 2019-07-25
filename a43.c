#include<stdio.h>
int main()
{int i,c,n;
printf("enter the value of whose table is to be found");
scanf("%d",&n);
for(i=1; i<=10; i++)
{c=i*n;
printf("%d * %d = %d",i,n,c);
printf("\n");
}
return 0;
}
