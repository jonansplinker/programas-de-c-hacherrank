#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int a,b,c;
int s(int n)
{
	if(n<=3)
	{
		return (a+b+c);
	}
	else return s(n-1)+s(n-2)+s(n-3);
}
int main()
{
	int m;
	scanf("%d",&m);
	scanf("%d %d %d",&a,&b,&c);
	int sm=s(m);
	printf("%d",sm);
	return 0;
}
