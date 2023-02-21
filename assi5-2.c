#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter n");
    scanf("%d",&n);
    printf("print natural number:");
    while(i<=n)
    {
        printf("%d \n",i);
        i++;
    }
}