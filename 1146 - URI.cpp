#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	
	while(a!=0){
		for(int i=1;i<=a;i++){
			if(i==a){
				printf("%d\n", i);
			}else{
				printf("%d ", i);
			}
			
		}
			
		scanf("%d", &a);
	}
	return 0;
}