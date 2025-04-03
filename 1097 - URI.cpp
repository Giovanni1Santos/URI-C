#include <stdio.h>

int main (){

	int i=1, j=8;
	
	while(i<=9&&j!=13){
		for(int k=0;k<3;k++){
			j--;
			printf("I=%d J=%d\n", i,j);
		}
		i = i+2;
		j=j+5;
	}
	return 0;
}