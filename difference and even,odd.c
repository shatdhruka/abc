#include<stdio.h>
int main(void)
{
    int n,m,x;
    scanf("%d %d",&n,&m);
    x=n+m;
    if((x%2)==0)
    {
        printf("even",x);
    }
    else
    {
        printf("odd",x);
    }
}
