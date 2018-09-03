#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main () {
	
	char s[10];
	scanf("%[^\n]%*c", s);
	scanf("\n");
	printf("Hello, World!\n");
	printf("%s", s);
	return 0;
}

