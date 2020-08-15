#include <stdio.h>

int main() {
  int linha, i, j;
  double x, matriz[12][12], soma = 0, media = 0;
  char tipo;

  scanf("%d %c", &linha, &tipo);

  for (i = 0; i < 12; i++) {
    for (j = 0; j < 12; j++) {
      scanf("%lf", &x);

      matriz[i][j] = x;
    }
  }

  for (i = 0; i < 12; i++) {
    soma += matriz[linha][i];
  }

  if (tipo == 'M') {
    media = soma / 12;
    printf("%.1lf\n", media);
  } else {
    printf("%.1lf\n", soma);
  }

  return 0;
}