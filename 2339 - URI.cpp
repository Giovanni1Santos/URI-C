#include<stdio.h>

int main(){
	int a, b, c, x=0;
	scanf("%d %d %d", &a, &b, &c);
	
	x = a * c;
	if(x<=b){
		printf("S\n");
	}else{
		printf("N\n");
	}
	
	return 0;
}