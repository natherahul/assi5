#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter n:");
    scanf("%d",&n);
    printf("print the table of %d:\n",n);
    while(i<=10)
    {
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
    }
}