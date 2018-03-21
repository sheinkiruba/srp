#include <stdio.h>
int main()
{
    int k, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d",&k);
    for(i=2; i<=k/2; ++i)
    {
        if(k%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",k);
    else
        printf("%d is not a prime number.",k);
    
    return 0;
}
