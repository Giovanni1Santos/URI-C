#include<stdio.h>
#include<math.h>
int main(){
	double a, b, c, d, x1, x2;
	scanf("%lf %lf %lf", &a, &b, &c);
	d = (b*b)-((4*a)*c);
	if(d<0){
		printf("Impossivel calcular\n");
	}else if(a==0){
		printf("Impossivel calcular\n");
	}
	
	
	else{
		x1 = (-b + sqrt(d))/(a+a);
		x2 = (-b - sqrt(d))/(a+a);
		printf("R1 = %.5lf\n", x1);
		printf("R2 = %.5lf\n", x2);
}
	return 0;
}