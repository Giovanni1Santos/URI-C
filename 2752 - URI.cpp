#include<stdio.h>
#include<string.h>

int main(){
	char v[50]="AMO FAZER EXERCICIO NO URI";
	printf("<%s>\n", v);
	printf("<%30s>\n", v);
	printf("<%.20s>\n", v);
	printf("<%-20s>\n", v);
	printf("<%-30s>\n", v);
	printf("<%.30s>\n", v);
	printf("<%30.20s>\n", v);
	printf("<%-30.20s>\n", v);
	return 0;
}