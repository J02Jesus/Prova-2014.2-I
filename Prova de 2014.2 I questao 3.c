#include <stdio.h>

int main() {
  int a, b, c, p, q, r;
  printf("digite o valor dos tres lados do triangulo\n");
  scanf("%d %d %d", &a, &b, &c);

  p=a+b;
  q=b+c;
  r=a+c;
  if(a>q){ 
    printf("eh triangulo");
  }else if(b>r){ 
    printf("eh triangulo");
  }else if(c>p){
    printf("eh triangulo");
  }else{
    printf("nao eh triangulo");
  }
  return 0;
}