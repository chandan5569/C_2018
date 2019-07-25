#include<stdio.h>
int main()
{int x;
printf("enter the number to be checked");
scanf("%d",&x);
if(x>=1 && x<=9)
printf("single digit");
else if(x>=10 && x<=99)
printf("double digit");
else if(x>=100 && x<=999)
printf("triple digit");
else
printf("four digit number");
return 0;
}
