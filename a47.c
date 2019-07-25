#include<stdio.h>
int main()
{char ch;
printf("enter the character");
scanf("%c",&ch);
if(ch>='a' && ch<='z')
{ ch=ch-32;
printf("%c",ch);
}
else
printf("not in lower case");
return 0;
}
