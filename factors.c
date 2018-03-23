#include<stdio.h>
int main()
{
int k,v;
printf("Enter the numbers");
scanf("%d",&k);
for(v=1;v<=k;v++)
{
if((k%v)==0)
{
printf("%d\n",v);
}
}
return 0;
}
