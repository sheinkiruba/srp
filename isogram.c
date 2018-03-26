#include<stdio.h>
#include<string.h>
 int main()
{
char a[25];
int i,j,n,t=0;
printf("\n Enter the phrase..:");
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
t++;
break;
}   
}
}
if(t==0)
printf("YES");
else
printf("NO");
return 0;
}
