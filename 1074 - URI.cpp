#include<stdio.h>

int main(){
	int n, a, c=0;
	scanf("%d", &n);
	
	while(c<n){
		scanf("%d", &a);
		if(a%2==0 && a>0){
			printf("EVEN POSITIVE\n");
		}else if(a%2==0 && a<0){
			printf("EVEN NEGATIVE\n");
		}
		if(a%2!=0 && a>0){
			printf("ODD POSITIVE\n");
		}else if(a%2!=0 && a<0){
			printf("ODD NEGATIVE\n");
		}
		if(a==0){
			printf("NULL\n");
		}
		c++;
	}
}