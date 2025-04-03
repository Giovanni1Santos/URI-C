#include<stdio.h>

int main(){
	int x, y, r=0;
	
	scanf("%d%d", &x,&y);
	if(x<y){
		for(int i=x;i<=y;i++){
			if(i%13!=0){
				r+=i;
			}
		}
	}else if(y<x){
		for(int i=y;i<=x;i++){
			if(i%13!=0){
				r+=i;
			}
		}
	}
	printf("%d\n", r);
	return 0;
}