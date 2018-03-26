#include <stdio.h>
int main()
{
    int num,k =20,v=40;
     printf("Print Odd Numbers in a given range k to v:\n");
    for (num = k; num <= v; num++)
        {
               if (num % 2 == 1)
                  printf ("%d ", num);
         }
                return 0;
}
