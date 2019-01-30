#include<stdio.h>
void main()
{
    int a[50],i,avg,k,sum=0;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/k;
    printf("%d",avg);
}
