#include<stdio.h>
#include<math.h>
int main()
{int x,y,z,w; float a;
printf("enter the values");
scanf("%d%d%d%d",&x,&y,&z,&w);
a=sqrt((pow((x-y),2)+pow((z-w),2)));
printf("%f",a);
return 0;
}
