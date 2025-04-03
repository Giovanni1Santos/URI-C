#include<stdio.h>

int main(){
	int a,b,c,d;
	scanf("%d%d%d%d", &a,&b,&c,&d);
	int x = c-a;
	int y = d-b;
	
	if(x<0){
		x=24+(c-a);
	}if(y<0){
		y=60+(d-b);
		x--;
	}
	
	if(a==c && b==d){
		if (x==24 && y>0){
			printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", y);
		}else{
			printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
		}
	}
	else if(x<0&&y>0){
			printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n", y);
	}
	else{	
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", x, y);
	}
	
	return 0;
}