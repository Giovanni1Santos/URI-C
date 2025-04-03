#include<stdio.h>

int main(){
	int n, x=0, a=1, b=2, c=3;
	
	scanf("%d", &n);
	
	while(x<n){
		printf("%d %d %d PUM\n", a, b, c);
		a+=4;
		b+=4;
		c+=4;
		x++;	
	}
	return 0;
}