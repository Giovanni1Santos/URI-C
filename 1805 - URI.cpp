#include<stdio.h>
int main(){
	long long a, b, s;

	scanf("%lli %lli", &a, &b);

	s = (a+b)*((b-a)+1)/2;
	printf("%lli\n", s);
	
	return 0;
}