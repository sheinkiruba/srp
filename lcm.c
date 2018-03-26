#include <stdio.h>
int main()
{
    int k, v, minMultiple;
    printf("Enter two positive integers: ");
    scanf("%d %d", &k, &v);
    minMultiple = (k>v) ? k : v;
    while(1)
    {
        if( minMultiple%k==0 && minMultiple%v==0 )
        {
            printf("The LCM of %d and %d is %d.", k, v,minMultiple);
            break;
        }
        ++minMultiple;
    }
    return 0;
}
