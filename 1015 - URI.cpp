#include<stdio.h>
#include<math.h>
int main(){
	double x1, x2, y1, y2, z;
	scanf("%lf %lf", &x1, &y1);
	scanf("%lf %lf", &x2, &y2);
	z = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
	z = sqrt(z);
	printf("%.4lf\n", z);
	
}