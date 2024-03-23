#include <stdio.h>

int main() {
  float grau, seg, min;
  float dec;
  printf("digite os graus,  minutos e segundos\n");
  scanf("%f %f %f",&grau, &min, &seg);

  dec=grau+(min/60)+(seg/3600.0);
  printf("%.5f\n", dec);
}