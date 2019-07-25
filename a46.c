#include<stdio.h>
int main()
{int x;
printf("enter the mark of student");
scanf("%d",&x);
if(x<=100 && x>90)
printf("outstanding");
else if(x<=90 && x>80)
printf("excellant");
else if(x<=80 && x>70)
printf("very good");
else if(x<=70 && x>60)
printf("good");
else if(x<=60 && x>50)
printf("average");
else if(x<=50 && x>40)
printf("need improvement");
else
printf("fail");
return 0;
}

