#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
	char *options[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	int a, b, n ;
	scanf("%d\n%d", &a, &b);
	for (n=a;n<=b;n++)
	{
		if (n<=9)
		{
			printf("%s\n",options[n]);
		}
		else if(n>9)
		{
			if(n%2 == 0)
			{
				printf("even\n");
			}
			else
			{
				printf("odd\n");
			}
		}
	}
	
	return 0;
}
