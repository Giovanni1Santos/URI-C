#include<stdio.h>
#include<string.h>

int main(){
	char s[20];
	int c = 0;
	scanf("%s", &s);
	
int j = strlen(s);
	
	for(int i=0; i<j; i++){
		c = c+1;	
	}
	
	if(c>=10){
	printf("palavrao\n");
	}
	if(c<10){
		printf("palavrinha\n");
	}
return 0;
}