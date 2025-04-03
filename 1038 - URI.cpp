#include<stdio.h>
int main(){
	double x, z;
	scanf("%lf %lf", &x, &z);
	
	if(x == 1){
		z = z * 4.00;
		printf("Total: R$ %.2lf\n", z);
	}else if(x == 2){
		z = z * 4.50;
		printf("Total: R$ %.2lf\n", z);
	}else if(x == 3){
		z = z * 5.00;
		printf("Total: R$ %.2lf\n", z);
	}else if(x ==4){
		z = z *2.00;
		printf("Total: R$ %.2lf\n", z);
	}else if(x == 5){
		z = z *1.50;
		printf("Total: R$ %.2lf\n", z);
	}
	return 0;
}