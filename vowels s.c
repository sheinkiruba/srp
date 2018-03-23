#include<stdio.h>
int main()
{
char k[100];
int i=0,count=0;
scanf("%s",&k);
while(k[i]!='\0')
{
if(k[i]=='k'||k[i]=='e'||k[i]=='i'||k[i]=='o'||k[i]=='u'||k[i]=='A'||k[i]=='E'||k[i]=='I'||k[i]=='O'||k[i]=='U')
{
count=1;
}
i++;
}
if(count==1)
{
printf("yes");
}
else
{
printf("No");
}
return 0;
}
