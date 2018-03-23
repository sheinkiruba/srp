#include<stdio.h>
int main() 
{
int k;
printf("Enter a number:");
scanf("%d",&k);
if(k%13==0)
{
printf("It is a multiple of thirteen.");
}
else
{
printf("It is not a multiple of thirteen.");
}
return 0;
}
