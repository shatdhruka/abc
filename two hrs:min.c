#include<stdio.h>
void main()
{
    int h1,m1,h2,m2,h,m;
    scanf("%d %d",&h1,&m1);
    scanf("%d %d",&h2,&m2);
    h = h2-h1;
    m = m2-m1;
    printf("%d %d",h,m);
}
