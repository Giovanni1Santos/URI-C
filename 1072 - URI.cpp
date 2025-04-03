#include<stdio.h>

int main(){
	int n, j,c1=0,c2=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &j);
		if(j>=10&&j<=20){
			c1++;
		}else{
			c2++;
		}
	}
	printf("%d in\n", c1);
	printf("%d out\n", c2);
	return 0;
}