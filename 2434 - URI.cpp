#include<stdio.h>

int main(){
	int a, b, x, y;
	scanf("%d%d", &a,&b);
	int v[a+1];
	v[0]=b;
	y=b;
	for(int i=1; i<a+1; i++){
		scanf("%d", &v[i]);
		v[i]=v[i]+v[i-1];
		if(v[i]<v[i-1] && v[i]<y){
			 y=v[i];
		}
	}
	printf("%d\n", y);
	return 0;
}