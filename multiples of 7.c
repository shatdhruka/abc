#include<stdio.h>
int main(void)
{
    int n,x;
    scanf("%d",&n);
    x=n + (7 - n % 7);
    printf("%d",x);
}
