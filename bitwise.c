#include <stdio.h>
int main() 
{
	int k=23;
	int v=46;
    printf("\nBefore swapping Value of \nk=%d \nv=%d ",k,v);
    v=v^k;
    k=v^k;
    v=v^k;
    printf("\nAfter swapping value of \nk=%d \nv=%d ",k,v);	
    return 0;
}
