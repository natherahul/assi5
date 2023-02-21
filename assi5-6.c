#include<stdio.h>
int main()
{
   int i=1,n;
   printf("enter n:");
   scanf("%d",&n);
   printf("print first %d natural even numbers:",n);
   while(i<=n)
   {
      printf("%d ",i*2);
      i++;
   }
}