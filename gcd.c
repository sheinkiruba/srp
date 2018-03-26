#include <stdio.h>
int main()
{
    int k, v, i, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &k, &v);
    for(i=1; i <= k && i <= v; ++i)
    {
        // Checks if i is factor of both integers
        if(k%i==0 && v%i==0)
            gcd = i;
    }
    printf("G.C.D of %d and %d is %d", k,v, gcd);
    return 0;
}
