#include<stdio.h>
int main() 
{
int a,b;
    int diff;
    printf("\nEnter first number: ");
    scanf("%d",&a);
    printf("\nEnter second number: ");
    scanf("%d",&b);
    if( a>b )
        diff=a-b;
    else
        diff=b-a;
 
    printf("\nDifference between %d and %d is = %d",a,b,diff);
if(diff%2==0)
{
printf("\nIt is EVEN Number:%d",diff);
}
else
{
printf("\nIt is ODD Number:%d",diff);
}
return 0;
}
