#include <stdio.h>
int main()
{
    intk,i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d",&k);
    for(i=1; i <= k; ++i)
    {
        sum += i;  
    }
    printf("Sum = %d",sum);
    return 0;
}
