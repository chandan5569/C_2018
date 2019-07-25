#include<stdio.h>
int main()
{
int a[3][3],b[3][3],i,j,c=0;
printf("enter the nine elements of matrix");
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
b[i][j]=a[j][i];
}
}
for(i=0; i<=2; i++)
{
for(j=0; j<=2; j++)
{
if(b[i][j]!=a[i][j])
c=1;
break;
}
}
if(c==0)
printf("symetric matrix");
else
printf("not symetric");
return 0;
}

