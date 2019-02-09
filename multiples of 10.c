#include<stdio.h>
int main(void)
{
    int n,x;
    scanf("%d",&n);
    x=n + (10 - n % 10);
    printf("%d",x);
}
