#include<stdio.h>
int main()
{
char ch;
printf("enter a character:\n");
scanf("%s",&ch);
if(ch>='a'&& ch<='z'||ch>='A'&& ch<='Z');
{
printf("%s is an alphabet"\n);
}
else
{
printf("%s is no an alphabet"\n);
}
return 0;
}
