#include<stdio.h>

int main(){
	int n=0, x, y;
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		scanf("%d%d", &x,&y);
		if((x!=0)&&(y==0)){
			printf("divisao impossivel\n");
		}else{
			float z = (float)x/y;
			printf("%.1f\n", z);
		}
	}
	return 0;
}