#include<stdio.h>

int main(){
    int vet[5];
    int c=0, j=0, p=0, n=0;

    for(int i=0;i<5;i++){
        scanf("%d", &vet[i]);
        if(vet[i]%2==0){
            c++;
        }else{
            j++;
        }
        if((vet[i]>0)&&(vet[i]!=0)){
            p++;
        }if(vet[i]<0){
            n++;
        }
    }
    printf("%d valor(es) par(es)\n",c);
    printf("%d valor(es) impar(es)\n",j);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",n);

    return 0;
}