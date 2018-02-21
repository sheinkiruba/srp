#include<stdio.h>
int main()
{
	int k,v,temp;
	printf("enter the values of K and V:\n");
	scanf("%d%d",&k,&v);
	printf("Before swapping:\n k=%d\n v=%d\n",k,v);
	temp = k;
	k = v;
	v = temp;
	printf("After swapping:\n k=%d\n v=%d\n",k,v);
	return 0;
}
