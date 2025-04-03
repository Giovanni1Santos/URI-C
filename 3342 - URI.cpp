#include<stdio.h>
int main(){
	int n, b, p, total;
	scanf("%d", &n);
	total = n*n;
	p = total/2;
	b = total - p;
	
	printf("%d casas brancas e %d casas pretas\n", b,p);
	
	return 0;
}