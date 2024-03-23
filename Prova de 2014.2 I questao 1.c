#include <stdio.h>

int main(void) {
 float  a, b, p, p2;
  printf("valor em percent\n");
  scanf("%f", &a);
  printf("valor em percent\n");
  scanf("%f", &b);

  a/=100;
  b/=100;
  
  p=a*b;
  p2=a+b-p;
  
  printf("%.2f uma vez e %.2f segunda", p, p2);
  return 0;
}