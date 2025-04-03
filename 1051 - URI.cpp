#include<stdio.h>

int main(){
	double sal;
	
	scanf("%lf", &sal);
	
	if(sal>=0 && sal<=2000){
		printf("Isento\n");
	}else if(sal>2000&&sal<=3000){
		sal = (sal-2000)*0.08;
		printf("R$ %.2lf\n", sal);
	}else if(sal>3000&&sal<=4500){
		sal = ((sal-3000)*0.18)+80;
		printf("R$ %.2lf\n", sal);
	}else if(sal>4500){
		sal = ((sal-4500)*0.28)+350;
		printf("R$ %.2lf\n", sal);
	}
	return 0;
}