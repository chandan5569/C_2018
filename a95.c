#include<stdio.h>
int main()
{
int a[20],i,n,max=0;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements");
printf("\n");
for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n; i++)
{
if(a[i]%2==0)
{
if(max<a[i])
max=a[i];
}
}
printf("\n");
printf("Largest Even Number is \n");
printf("%d",max);
return 0;
}
