#include<stdio.h>

int main(){
	int maior=0, menor=0, n, c=0;
	for(int i=1;i<=100;i++){
		scanf("%d", &n);
		if(n>maior){
			maior = n;
			c = i;
		}
		if(i<maior){
			if(n<menor){
				menor = n;
			}
		}
	}
	printf("%d\n", maior);
	printf("%d\n", c);
	return 0;
}