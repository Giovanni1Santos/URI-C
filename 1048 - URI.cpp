#include<stdio.h>

int main(){
	float sal, new_sal=0, aumento=0, percent=0;
	scanf("%f", &sal);
	if(sal>=0&&sal<=400.00){
		new_sal=sal+(sal*0.15);
		percent = 15;
	}
	if(sal>=400.01&&sal<=800.00){
		new_sal=sal+(sal*0.12);
		percent = 12;
	}
	if(sal>=800.01&&sal<=1200.00){
		new_sal=sal+(sal*0.10);
		percent = 10;
	}
	if(sal>=1200.01&&sal<=2000.00){
		new_sal=sal+(sal*0.07);
		percent=7;
	}
	if(sal>2000.00){
		new_sal=sal+(sal*0.04);
		percent = 4;
	}
	aumento = new_sal - sal;
	printf("Novo salario: %.2f\n",new_sal);
	printf("Reajuste ganho: %.2f\n",aumento);
	printf("Em percentual: %.0f %%\n",percent);
	return 0;
}