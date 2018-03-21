#include<stdio.h>
int main()
{
int k;
printf("ENTER The number:\n");
scanf("%d",&k);
if(k%10==0||k%10==1)
{
printf( "Number is binary");
}
else
{
printf( "Number is not binary");
}
return 0;	
}
