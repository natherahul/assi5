#include<stdio.h>
int main()
{
    int i,n;
    printf("enter n:");
    scanf("%d",&n);
    i=n;
    printf("print the first %d even netural number in reverse order:",n);
    while(i>0)
    {
        printf("%d ",i*2);
        i--;
    }
}