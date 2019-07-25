#include<stdio.h>
int main()
{
int a[3][3],i,j,sum=0;
printf("enter the elements of matrix");
for(i=0; i<=2; i++)
{
for(j=0; j<=2; j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0; i<=2; i++)
{
for(j=0; j<=2; j++)
{
if(i==j)
sum=sum+a[i][j];
}
}
printf("summation of diagonals of matrix is %d ",sum);
return 0;
}
