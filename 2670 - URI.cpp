#include <stdio.h>

int main(){
  int a, b, c, rA, rB, rC, aux;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  rA= (b*2)+(c*4); 
  rB= (a*2)+(c*2);
  rC= (a*4)+(b*2);
  a=rA;
  b=rB;
  c=rC;
  if(a > c){
    aux=a;
    a=c;
    c=aux;
  }
  if(b > c){
    aux=b;
    b=c;
    c=aux;
  }
  if(a > b){
    aux=a;
    a=b;
    b=aux;
  }
    printf("%d\n", a);
  return 0;
}
