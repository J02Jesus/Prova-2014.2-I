#include <stdio.h>

int main() {
int soma, numero, t, u, v, w;
  
  printf("digite um numero de quatro algarismos:\n\n");
  scanf("%d", &numero);

  t=numero/1000;
  u=(numero/100)%10;
  v=(numero/10)%10;
  w=(numero/1)%10;
w*=2;
 u*=2;

u-=9;
  soma=w+v+u+t;
  printf("%d %d %d %d = %d\n\n", w, v, u, t, soma);

  if(soma/10){
    printf("sucesso!!!");
  }else{
    printf("erro");
  }
}
