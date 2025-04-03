#include <stdio.h>

int main() {
   float media, num1, num2;
   
	do{
		scanf("%f", &num1);
		if (num1<0 || num1 >10){
			printf("nota invalida\n");
		}
	}while(num1<0 || num1>10);
	
	do{
		scanf("%f", &num2);
		if (num2 <0 || num2 > 10){
			printf("nota invalida\n");
		}
	}while(num2<0 || num2>10);
	
	media = (num1 + num2)/2;
	printf("media = %.2f\n", media);
	             
  return 0;
}