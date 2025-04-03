#include<stdio.h>

int main(){
	int s=0;
	scanf("%d", &s);
	while(s!=2002){
		printf("Senha Invalida\n");
		scanf("%d", &s);
	}
	printf("Acesso Permitido\n");
	return 0;
}