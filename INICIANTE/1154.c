#include <stdio.h>

int main() {
  int soma=0, x;
  float media, cont=0;

  while (scanf("%d", &x) != EOF && x >= 0) {
    soma += x;
    cont++;
  }
  media = soma/cont;
  printf("%.2f\n", media);
  return 0;
}