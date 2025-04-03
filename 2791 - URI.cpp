#include<stdio.h>

int main(){
	int x[5], c=1;
	
	for(int i=0;i<4;i++){
		scanf("%d", &x[i]);
	}
	
	int j=0;
	
	while(x[j]==0){
		c++;
		j++;
	}
	
	printf("%d\n", c);
	return 0;
}