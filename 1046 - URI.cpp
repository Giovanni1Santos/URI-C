#include<stdio.h>

int main(){
	int x=0,y=0;
	scanf("%d%d", &x,&y);
	if(x>y){
		printf("O JOGO DUROU %d HORA(S)\n", 24-(x-y));
	}else if(y>x){
		printf("O JOGO DUROU %d HORA(S)\n", (y-x));
	}else{
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
	return 0;
}