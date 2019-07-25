#include<stdio.h>
int main()
{
int a[10],i;
printf("enter the elements");
for(i=0; i<=9; i++)
{
scanf("%d",&a[i]);
}
printf("even numbers are");
for(i=0; i<=9; i++)
{if(a[i]%2==0)
  printf("%d",a[i]);
      }
printf("odd numbers are");

for(i=0; i<=9; i++)
{if(a[i]%2!=0)
         printf("%d",a[i]);
}
return 0;
}
