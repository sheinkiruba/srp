#include<stdio.h>
#include<string.h>
 int main()
{
char k[25];
int i,j,n,v=0;
printf("\n Enter the phrase:");
scanf("%s",k);
n=strlen(k);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(k[i]==k[j])
{
v++;
break;
}   
}
}
if(v==0)
printf("YES");
else
printf("NO");
return 0;
}
