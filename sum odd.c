#include <stdio.h>
int main()
{
    int n, t, sum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    t = n; 
   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   } 
   printf("Sum of digits of %d = %d\n", n, sum);
    if(sum % 2 == 0)
        printf("%d is even.", sum);
    else
        printf("%d is odd.", sum);
    return 0;
}

