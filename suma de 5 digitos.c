#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int k;
	char arr[5];
	scanf("%s", arr);
	int sum = 0;
	for(int i = 0 ; i < 5 ; i++)
		sum += arr[i] - '0';
	printf("%d",sum);
	return 0;
}
