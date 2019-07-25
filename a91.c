#include<stdio.h>
int main()
{
int a[3][3],i,j;
printf("enter the 9 elements of matrix");
for(i=0; i<=2; i++)
{
for(j=0; j<=2; j++)
{
scanf("%d",&a[i][j]);
}
}
printf("diagonal elements of matrix are");
for(i=0; i<=2; i++)
{
for(j=0; j<=2; j++)
{
if(i==j)
printf(" %d ",a[i][j]);
}
}
return 0;
}

