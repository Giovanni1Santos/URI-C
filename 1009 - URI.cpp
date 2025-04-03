#include<stdio.h>

int main(){
	char nome[21];
	double sf, tv, total; 
	scanf("%s", &nome);  
	scanf("%lf %lf", &sf, &tv);

	total = (0.15*tv);
	total = total + sf;
	
	printf("TOTAL = R$ %.2lf\n", total);
	return 0;
}