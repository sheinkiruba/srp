#include <stdio.h>
int main()
{
    int k, v, s, d, terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    k = 0;
    v = 1;
    s = 0;
    printf("Fibonacci terms: \n");
    for(d=1; d<=terms; d++)
    {
        printf("%d, ", s);
        k = v;     
        v = s;     
        s = k + v; 
    }
    return 0;
}
