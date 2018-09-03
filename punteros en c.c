#include <stdio.h>

void update(int *pa,int *pb) {
	int x,y;
	x=*pa+*pb;
	y=*pa-*pb;
	*pa=x;
	*pb=abs(y);
    
}

int main() {
	int a, b;
	int *pa = &a, *pb = &b;
	
	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);
	
	return 0;
}
