#include<stdio.h>

int main(){
	int N, a,b, h, m, s;
	
	scanf("%d", &N);
	h = N/3600;
	a = N%3600;
	m = a/60;
	s = a%60;
	
	printf("%d:%d:%d\n", h, m, s); 
	
	
	

    return 0;
}