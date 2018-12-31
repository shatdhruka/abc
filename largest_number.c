#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the number:");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
printf("a is greater",a,b,c);
else if((b>a)&&(b>c))
printf("b is greater",a,b,c);
else
printf("c is greater",a,b,c);
}
