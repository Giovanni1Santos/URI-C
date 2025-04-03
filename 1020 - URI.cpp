#include<stdio.h>

int main(){
	int idade, a, m, d, rest1;
	
	scanf("%d", &idade);
	a = idade/365;
	rest1 = idade%365;
	m = rest1/30;
	d = rest1%30;
	
	
	printf("%d ano(s)\n",a);
	printf("%d mes(es)\n",m);
	printf("%d dia(s)\n",d);
	
	return 0;
}