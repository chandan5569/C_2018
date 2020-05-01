#include<stdio.h>
int main()
{
int a[3][3],b[3][3],i,j;
printf("enter the 9 elements of the matrix");
for(i=0; i<=2; i++)
{
for(j=0; j<=2; j++)
{
scanf("%d",&a[i][j]);
}
}
printf("transpose of matrix is");
for(i=0; i<=2; i++)
{
for(j=0; j<=2; j++)
{
b[i][j]=a[j][i];
printf(" %d ",b[i][j]);
}
printf("\n");
}
return 0;
}
