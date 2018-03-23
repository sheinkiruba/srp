#include<stdio.h>
#include<string.h>
int main() 
{
char k[23];
int c=0,i,v;
printf("Enter a string:");
scanf("%s",k);
v=strlen(k);
for(i=0;i<v;i++)
{
if(k[i]==k[v-i-1])
{
c++;
}
}
if(v==c){
printf("YES");
}
else
{
printf("NO");
}
return 0;
}
