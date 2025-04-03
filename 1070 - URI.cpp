#include<stdio.h>

int main(){
	int c=0, a;
	scanf("%d", &a);
	
	while(c<6){
		if(a%2!=0){
			c++;
			printf("%d\n", a);
		}
	  a++;
	} 
  return 0;	
}