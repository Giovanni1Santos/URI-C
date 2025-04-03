#include<stdio.h>

int main(){
	int m, n, menor=0, maior=0, soma=0;
	
	scanf("%d%d", &m, &n);
	while(1){
		if (m <= 0 || n <= 0) {
            break; 
        }
		if(m<n){
			menor = m;
			maior = n;
		}else {
			menor = n;
			maior = m;
		}
		for (int i = menor; i <= maior; i++) {
            printf("%d ", i);
            soma += i;
			
        }
		 printf("Sum=%d\n", soma);

        soma=0;
        scanf("%d%d", &m, &n);
        
    }
	return 0;
}