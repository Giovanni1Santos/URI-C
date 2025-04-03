#include<stdio.h>

int main(){
	float ped, x=0, p, q;
	scanf("%f", &ped);
	while(ped){
		scanf("%f%f", &p, &q);
		if(p==1001){
			x+= 1.50*q;
		}
		if(p==1002){
			x+= 2.50*q;
		}
		if(p==1003){
			x+= 3.50*q;
		}
		if(p==1004){
			x+= 4.50*q;
		}
		if(p==1005){
			x+= 5.50*q;
		}
		ped--;
	}
	printf("%.2f\n", x);
	return 0;
}