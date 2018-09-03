#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	/*char *s;
	s = malloc(1000 * sizeof(char));
	scanf("%[^\n]", s);
	s = realloc(s, strlen(s) + 1);
	printf("%d", strlen(s));*/
	
	
	char* s;
	s=(char*)malloc(1000 * sizeof(char));
	int output [10]={0,0,0,0,0,0,0,0,0,0};
	scanf("%[^\n]", s);
	if(strlen(s)<=1000){
		s=(char*)realloc(s, strlen(s));
		for(int i =0; i < strlen(s); i++){
			if(s[i]== '0'){
				output[0] = output[0] +1;
			}else if(s[i]== '1'){
				output[1] = output[1] +1;
			}else if(s[i]== '2'){
				output[2] = output[2] +1;
			}else if(s[i]== '3'){
				output[3] = output[3] +1;
			}else if(s[i]== '4'){
				output[4] = output[4] +1;
			}else if(s[i]== '5'){
				output[5] = output[5]+1;
			}else if(s[i]== '6'){
				output[6] = output[6] +1;
			}else if(s[i]== '7'){
				output[7] = output[7] +1;
			}else if(s[i]== '8'){
				output[8] = output[8] +1;
			}else if(s[i]== '9'){
				output[9] = output[9] +1;
			}
		}
		
		for(int j; j < 10; j++){
			printf("%d ", output[j]);
		}
		
		
	}
	
	
	
	free(s);
	return 0;
}
