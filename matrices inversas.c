#include<stdio.h>
#include<stdlib.h>
void reversaf(int *x,int*y){
	int m;
	m=*x;
	*x=*y;
	*y=m;
}
int main(void){
	int num,*arreglo ,i,j;
	scanf("%d",&num);
	arreglo=(int *)malloc(num*sizeof(int));
	for(i=0;i<num;i++){
		scanf("%d",(arreglo+i));
	}
	for(i=0,j=num-1;i<j;i++,j--){
		reversaf(arreglo+i,arreglo+j);
	}
	for(i=0;i<num;i++){
		printf("%d\t",*(arreglo+i));
	}
	return 0;
}

