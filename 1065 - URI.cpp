#include<stdio.h>

int main(){
    int vet[5];
    int c=0;

    for(int i=0;i<5;i++){
        scanf("%d", &vet[i]);
        if(vet[i]%2==0){
            c++;
        }
    }
    printf("%d valores pares\n", c);
    return 0;
}