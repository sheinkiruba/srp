#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,result;
    int iVar;
    float fVar;
    printf("Enter a and b number: ");
     scanf("%d%d", &a, &b);
    result = a*b;
    printf("Product of %d and %d is %d\n", a, b, result); 
    fVar=sqrt((double)result);
    iVar=fVar;
 
    if(iVar==fVar)
        printf("%d is a perfect square.",result);
    else
        printf("%d is not a perfect square.",result);
      
    return 0;
}
