#include<stdio.h>

int main(){
	float n1, n2, n3, n4, n, m, mf;
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	m = (n1*0.2)+(n2*0.3)+(n3*0.4)+(n4*0.1);
	printf("Media: %.1f\n", m);
	
	if(m>= 7.0){
		printf("Aluno aprovado.\n");
	}
	else{
		if(m<5.0){
			printf("Aluno reprovado.\n");
		}
	}

	
	if(m>=5.0 && m<=6.9){
		printf("Aluno em exame.\n");
		scanf("%f", &n);
		printf("Nota do exame: %.1f\n", n);
		mf = (m + n)/2;
		if(mf>=5.0){
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n",mf);
		}else{
		
		if(mf<5.0){
			printf("Aluno reprovado.\n");
		}
	}
	}
	
 return 0;
}
