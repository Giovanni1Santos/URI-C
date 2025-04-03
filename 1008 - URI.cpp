#include <stdio.h>

int main(){
	
	float nf, ht, vht, salario;
	scanf("%f %f %f", &nf, &ht, &vht);
	salario = ht * vht;
	printf("NUMBER = %.0f\n", nf);
	printf("SALARY = U$ %.2f\n", salario);
	
	return 0;
	
}