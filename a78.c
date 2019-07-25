#include<stdio.h>
int main()
{
int a[5],i,diff=0;
printf("enter the five values");
for(i=0; i<=4; i++)
{
scanf("%d",&a[i]);
}
diff=a[4]-a[0];
printf("difference is %d",diff);
return 0;
}


