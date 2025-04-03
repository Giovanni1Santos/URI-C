#include<stdio.h>
int main(){
	int i, g, x=1, azul=0, vermelho=0, c=0, e=0;

	while((x!=2)&&(x==1)){
		scanf("%d%d", &i,&g);
		c++;	
		if(i>g){
			vermelho+=1;
		}else if(g>i){
			azul+=1;
		}else{
			e+=1;
		}
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &x);
	}
	printf("%d grenais\n", c);
	printf("Inter:%d\n", vermelho);
	printf("Gremio:%d\n", azul);
	printf("Empates:%d\n", e);
	if(vermelho>azul){
		printf("Inter venceu mais\n");
	}else if(azul>vermelho){
		printf("Gremio venceu mais\n");
	}else{
		printf("Nao houve vencedor\n");
	}
	return 0;
}