#include<stdio.h>

int contagem_link(int t){
	scanf("%d", &t);
	t = t * 4;
	return t;
}

int main(){
	int t;
	printf("%d\n", contagem_link(t));
	return 0;
}