#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the numbers:");
scanf("%d%d%d",&a,&b,&c);

if(a>b && a>c)
printf("%d is greater",a,b,c);
else if(b>a && b>c)
printf("%d is greater",a,b,c);
else
printf("%d is greater",a,b,c);
}
