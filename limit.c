#include<stdio.h>
int main() 
{
int i,a,b,n;
printf("\nEnter a   number:");
scanf("%d",&n);
printf("\nEnter a  limit:");
scanf("%d%d",&a,&b);
if(n>a&&n<b)
{
printf("\nYES");
}
else{
printf("\nNO");
}
return 0;
}
