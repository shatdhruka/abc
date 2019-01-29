#include<stdio.h>
void main()
{
    int hrs,min;
    scanf("%d",&min);
    hrs=min/60;
    min=min%60;
    printf("%d %d",hrs,min);
}
