#include<stdio.h>
#include<string.h>
int main()
{
char k[50];
int a,c,d;
printf("Enter the words:\n");
scanf("%s",&k);
a=strlen(k);
d='*';
k[a/2]=d;
if(a%2==0)
{
k[(c-1)/2]=d;
}
printf("The word is %s",k);
return 0;
}
