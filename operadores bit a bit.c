#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



void calcular(int n, int k) {
	
	int i=1,j=2,jStore=0,a=0,ap=0,ast=0,b=0,bp=0,bst=0,c=0,cp=0,cst=0;
	while(i<n+1)
	{
		jStore=j;
		while(j<n+1)
		{
			a=i&j;
			if(a<k)
			{
				ast=ap;
				ap=a;
				if(ast>ap)
				{
					ap=ast;
				}
			}
			
			
			b=i|j;
			if(b<k)
			{
				bst=bp;
				bp=b;
				if(bst>bp)
				{
					bp=bst;
				}
			}
			
			c=i^j;
			if(c<k)
			{
				cst=cp;
				cp=c;
				if(cst>cp)
				{
					cp=cst;
				}
			}
			
			
			
			j++;
		}
		j=jStore+1;
		i++;
	}
	
	printf("%d\n%d\n%d",ap,bp,cp);
	
	
	
}

int main() {
	int n, k;
	
	scanf("%d %d", &n, &k);
	calcular(n, k);
	
	return 0;
}
