#include<stdio.h>

int main(){
	int x=0, r1, r2, r3;
	scanf("%d", &x);
	for(int i=0;i<x;i++){
		scanf("%d%d", &r1, &r2);
		r3 = r1 + r2;
		printf("%d\n", r3);		
	}
	return 0;
}