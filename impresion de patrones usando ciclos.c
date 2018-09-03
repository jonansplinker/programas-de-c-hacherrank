#include <stdio.h>

#define minimo(l, b) ((l) < (b) ? (l) : (b))

int main() 
{
	int n;
	scanf("%d", &n);
	int len = n * 2 - 1;
	for(int fila = 0; fila < len; fila++)
	{
		for(int col = 0; col < len; col++)
		{
			int m = minimo(fila, col);
			m = minimo(m, len - fila - 1);
			m = minimo(m, len - col - 1);
			printf("%d ", n - m);
		}
		printf("\n");
	}
	return 0;
}

