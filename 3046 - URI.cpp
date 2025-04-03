#include<stdio.h>

int duploN(int N){
	int x = ((N+1)*(N+2))/2;
	return x;
}

int main(){
	int N;
	scanf("%d", &N);
	printf("%d\n", duploN(N));
	return 0;
}