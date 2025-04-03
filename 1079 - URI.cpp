#include<stdio.h>

int main(){
	int n;
	float a, b, c;
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		scanf("%f%f%f", &a,&b,&c);
		float med=((a*0.2)+(b*0.3)+(c*0.5));
		printf("%.1f\n", med);
	}
	return 0;
}