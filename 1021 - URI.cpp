#include<stdio.h>
#include<math.h>
int main(){
	int nota[6] = {100, 50, 20, 10, 5, 2};
	float moeda[6]= {100, 50, 25, 10, 5, 1};
	float a, b, n, c, d, e;
	scanf("%f", &n);
	e = n;
	printf("NOTAS: \n");
	
	for(int i=0; i<6; i++){
		a = n;
		b = nota[i];
		n = floor(n/b);
		a = a - (b * n);
		printf("%0.0f nota(s) de R$ %0.2f\n", n, b);	
		n = a;	
		}
	
	d = n;	
	printf("MOEDAS: \n");

	for (int i = 0; i<6; i++){
		c = moeda[i];
		c = c/100;
		n = floor(n/c);
		d = d - (c*n);
		printf("%0.0f moeda(s) de R$ %0.2f\n", n, c);
		n = d;
}
	
	return 0;
}