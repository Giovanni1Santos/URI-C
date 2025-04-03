#include<stdio.h>
#include<string.h>

int main(){
	int n, m;
	char a[8];
	
	scanf("%d %d", &n,&m);
	
	for(int i=0;i<m;i++){
		scanf("%s", &a);
		if(strcmp(a, "fechou") == 0){
			n +=2 - 1;
		}
		if(strcmp(a, "clicou") == 0){
			n -=1;
		}
	}
	printf("%d\n", n);
	return 0;
}