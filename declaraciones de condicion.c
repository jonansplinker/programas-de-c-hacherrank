#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() { int no; scanf("%d",&no); if(no>9) printf("Greater than 9");

switch(no)
{
case 1:
	if(no==1){
		printf("one");
		break;}
case 2:
	   if(no==2){
		   printf("two");
		   break;}
case 3:
		  if(no==3){
			  printf("three");
			  break;}
case 4:
			 if(no==4){
				 printf("four");
				 break;}
case 5:
				if(no==5){
					printf("five");
					break;}
case 6:
				   if(no==6){
					   printf("six");
					   break;}
case 7:
					  if(no==7){
						  printf("seven");
						  break;}
case 8:
						 if(no==8){
							 printf("eight");
							 break;}
case 9:
							if(no==9){
								printf("nine");
								break;}
}
}
