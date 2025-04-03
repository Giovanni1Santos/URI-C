#include<stdio.h>


int main(){
	int cod1, num1, cod2, num2;
	float vuni1, vuni2, vp;
	
	scanf("%d %d %f", &cod1, &num1, &vuni1);
	scanf("%d %d %f", &cod2, &num2, &vuni2);
	
	vp = (num1 * vuni1)+(num2 * vuni2);
	
	printf("VALOR A PAGAR: R$ %.2f\n", vp);
	return 0;
	
}