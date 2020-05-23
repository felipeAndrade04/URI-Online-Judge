#include <stdio.h>

int main() {
  int x = 1;
  float n1, n2, media;

  while(x == 1) {
    scanf("%f", &n1);
    while (n1 < 0 || n1 > 10) {
      printf("nota invalida\n");
      scanf("%f", &n1);
    }
    scanf("%f", &n2);
    while (n2 < 0 || n2 > 10) {
      printf("nota invalida\n");
      scanf("%f", &n2);
    }
    media = (n1+n2) / 2;
    printf("media = %.2f\n", media);
    
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &x);
    if(x == 2) return 0;

    while(x != 1) {
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d", &x);
    }
  }
  return 0;
}
