#include <stdio.h>
int main()
{
    int s, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&s);

    for(i=2; i<=s/2; ++i)
    {
        if(s%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",s);
    else
        printf("%d is not a prime number.",s);
    
    return 0;
}
