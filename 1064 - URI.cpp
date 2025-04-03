#include<stdio.h>

int main(){
    float vet[6];
    float c=0, aux=0, med=0;   

    for(int i=0;i<6;i++){
        scanf("%f", &vet[i]);
        if(vet[i]>0){
            c++;
            aux+=vet[i];
        }
    }
    med=aux/c;
    
    printf("%.0f valores positivos\n", c);
    printf("%.1f\n", med);

    return 0;
}