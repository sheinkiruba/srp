#include <stdio.h>
int main()
{
 int num, counter, isprime = 0;
 printf("Enter the positive integer:\n");
 scanf("%d",&num);
 for(counter = 2; counter <= num/2; counter++){
  if( (num % counter) == 0 )
  {
   isprime = 1;
   break;
  }
 }
 if(isprime == 0){
  printf("%d is a prime number",num);
 }
 else
 {
  printf("%d is a composite number",num);
 }
 return 0;
}

