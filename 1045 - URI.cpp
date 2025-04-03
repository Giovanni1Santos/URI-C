#include <stdio.h>

int main(){
	float a, b, c, aux;
	scanf("%f%f%f", &a,&b,&c);
	if(b>a){
		aux=a;
		a=b;
		b=aux;
	}
	if(c>a){
		aux=a;
		a=c;
		c=aux;
	}
	if(c>b){
		aux=b;
		b=c;
		c=aux;
	}
	
	if(a>=b+c){
		printf("NAO FORMA TRIANGULO\n");
	}else{
		
	if((a*a)==(b*b)+(c*c)){
		printf("TRIANGULO RETANGULO\n");
	}if((a*a)>(b*b)+(c*c)){
		printf("TRIANGULO OBTUSANGULO\n");
	}if((a*a)<(b*b)+(c*c)){
		printf("TRIANGULO ACUTANGULO\n");
	}if(a==b && a==c){
		printf("TRIANGULO EQUILATERO\n");
	}if(a==b && a!=c){
		printf("TRIANGULO ISOSCELES\n");
	}if(b==c && b!=a){
		printf("TRIANGULO ISOSCELES\n");
	}if(a==c && a!=c){
		printf("TRIANGULO ISOSCELES\n");
	}
  }
}