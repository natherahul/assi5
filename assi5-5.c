#include<stdio.h>
int main()
{
    int i,n;
    printf("enter n:");
    scanf("%d",&n);
    i=n;
    printf("print first %d odd natural number in reverse order:\n",n);
    while(i>0)
    {
        n=2*i-1;
        printf("%d ",n);
        i--;
        
    }
}