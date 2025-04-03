#include<stdio.h>

int main(){
	float num[6];
	int c=0;
	
	for(int i=0; i<6; i++){
		scanf("%f", &num[i]);
	}
	
	for(int i=0; i<6; i++){
		if(num[i]>0){
			c += 1;
		}
	}
	printf("%d valores positivos\n", c);
	return 0;
}