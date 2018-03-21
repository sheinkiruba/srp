#include<stdio.h>
int main() 
{
int k;
printf("Enter a number:");
scanf("%d",&k);
if(k%7==0)
{
printf("It is a multiple of seven.");
}
else
{
printf("It is not a multiple of seven.");
}
return 0;
}
