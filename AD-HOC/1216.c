#include <stdio.h>
#include <string.h>

int main() {
  double distancia, media, soma = 0;
  int i = 0;
  char nome[100];

  while(scanf("%s %lf", nome, &distancia) != EOF) {
    soma += distancia;
    i++;
  }

  media = soma/i;
  printf("%.1lf\n", media);
  return 0;
}