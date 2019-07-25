#include<stdio.h>
int main()
{
int a[3]={1,2,3},b[3];
printf("WITHOUT REVERSE:-");
for(int i=0;i<=2;i++)
{
    printf("%d ",a[i]);
}
printf("\n");
for(int j=0,l=2;j<=2,l>=0;j++,l--)
{
    b[l]=a[j];
   
}

for(int i=0;i<=2;i++)
{
    printf("%d ",b[i]);
}

return 0;
}

