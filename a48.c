#include<stdio.h>
int main()
{char ch;
printf("enter the charackter");
scanf("%c",&ch);
if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
printf("vowels");
else if(ch>='a'||ch>='A' && ch<='z'||ch<='Z')
printf("alphabets");
else
printf("not an alphabet");
return 0;
}

