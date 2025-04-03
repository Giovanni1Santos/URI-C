#include<stdio.h>

int main(){
	char pct[15], classe[15], obj[15];
	
	scanf("%s", &pct);
	scanf("%s", &classe);
	scanf("%s", &obj);
	
	if(pct[0] == 'v'){
		if(classe[0]=='a'){
			if(obj[0]=='c'){
				printf("aguia\n");
			}else if(obj[0]=='o'){
				printf("pomba\n");
			}
		}else if(classe[0]=='m'){
			if(obj[0]=='o'){
				printf("homem\n");
			}else if(obj[0]=='h'){
				printf("vaca\n");
			}
		}
		}else{
			if(classe[0] == 'i'){
				if(obj[2]=='m'){
					printf("pulga\n");
				}else if(obj[2]=='r'){
					printf("lagarta\n");
				}
			}else if(classe[0]=='a'){
				if(obj[0]=='h'){
					printf("sanguessuga\n");
				}else if(obj[0]=='o'){
					printf("minhoca\n");
				}
			}
		}
		return 0;
	}