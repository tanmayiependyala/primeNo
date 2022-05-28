#include<stdtio.h>
int main()
{
   int n,count;
   printf("enter a number:");
   scanf("%d",&n);
   for(i=1;i<n;i++)
   {
      if(n%i==0)
      {
         count++;
      }
   }
   if(count==1)
   {
      printf("%d is a prime number");
   }
   else
   {
      printf("%d is not a prime number);
   }
 }
