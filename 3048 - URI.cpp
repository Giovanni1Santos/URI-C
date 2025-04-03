#include<stdio.h>

int conta_circulo(int n){
	int c=0;
	int anterior=0;
	int v[n];
	for(int i=0;i<n;i++){
		scanf("%d", &v[i]);
		if(v[i]!=anterior){
			c++;
			anterior = v[i];
		}
	}
	
	return c;

}
	
int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", conta_circulo(n));
	return 0;	
}