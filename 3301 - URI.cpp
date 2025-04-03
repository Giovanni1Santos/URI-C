#include<stdio.h>
int main(){
	int h, z, l;
	scanf("%d %d %d", &h, &z, &l);
	
	
	if((z>h && z<l) || (z<h && z>l)){
		printf("zezinho\n");
	
	}
	
	if((l>z && l<h) || (l<z && l>h)){
		printf("luisinho\n");
	}
	
	if((h>l && h<z) || (h<l && h>z)){
		printf("huguinho\n");
	}
	return 0;
}