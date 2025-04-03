#include<stdio.h>

int main(){
	int a, b, c=0;
	
	scanf("%d%d", &a, &b);
	
	if(a<b){
		for(int i=a+1;i<b;i++){
			if(i%2!=0){
				c+=i;	
			}
		}
	
	}else{
		for(int i=b+1;i<a;i++){
			if(i%2!=0){
				c+=i;	
			}
		}
	}
	printf("%d\n", c);
	return 0;
	
}