#include<stdio.h>
void main()
{
    int hrs1,min1,hrs2,min2,hrs,min;
    scanf("%d %d",&hrs1,&min1);
    scanf("%d %d",&hrs2,&min2);
    hrs=hrs2-hrs1;
    min=min2-min1;
    printf("%d %d",hrs,min);
}
