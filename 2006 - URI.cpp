#include<stdio.h>

int main(){
	int t, v[5], c=0;
	scanf("%d", &t);
	
	for(int i=0; i<5; i++){
		scanf("%d", &v[i]);
		if(t==v[i]){
			c++;
		}
	}
	printf("%d\n", c);
	return 0;
}