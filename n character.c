#include <stdio.h>
int main(void) 
{
	char s[1000];
	int k,i;
	scanf("%s %d",s,&k);
	for(i=0;i<k;i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}
