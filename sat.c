#include <stdio.h>
int main()
{
    int v, reversedInteger = 0, remainder, originalInteger;
    printf("Enter an integer: ");
    scanf("%d", &v);
    originalInteger =v;
     
    while(v!=0 )
    {
        remainder =v%10;
        reversedInteger = reversedInteger*10 + remainder;
        v /= 10;
    }
   
    if (originalInteger == reversedInteger)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);
    
    return 0;
}
