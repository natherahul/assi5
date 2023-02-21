#include<stdio.h>
int main()
{
    int i,n;
    printf("enter n:");
    scanf("%d",&n);
    i=n;
    printf("print %d natural number in reverse order:\n",n);
    while(i>0)
    {
        printf("%d ",i);
        i--;
    }
}