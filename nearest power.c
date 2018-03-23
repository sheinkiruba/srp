#include<stdio.h>
int main() 
{
int k,s,v,u;
printf("Enter a number:");
scanf("%d",&k);
s=k/2;
if(s%2==0)
{
u=2*s;
printf("\n The nearest power of %d is:%d",k,u);
}
else
{
v=s-1;
u=2*v;
printf("\n The nearest powerof %d is:%d",k,u);
}
return 0;
}
