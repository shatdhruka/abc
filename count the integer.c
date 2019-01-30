#include<stdio.h>
void main()
{
    int n,a=0,b;
    scanf("%d",&n);
    while(n>0)
    {
        b=n%10;
        a++;
        n=n/10;
    }
    printf("%d",a);
}
