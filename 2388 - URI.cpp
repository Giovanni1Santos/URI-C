#include<stdio.h>

int calcula_km(int n){
	int C = 0;
	for(int i=0; i<n; i++){
		int T, V;
		scanf("%d%d", &T, &V);
		 C += T * V;
	}
	return C;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", calcula_km(n));	
	return 0;
}