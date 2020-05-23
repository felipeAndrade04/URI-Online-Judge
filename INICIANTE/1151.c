#include <stdio.h>

int main() {
  int n, i, anterior=0, atual=1, f;
  scanf("%d", &n);

  printf("%d %d", anterior, atual);
  for(i = 1; i < (n-1); i++) {
    f = anterior + atual;
    printf(" %d", f);
    anterior = atual;
    atual = f;
  }
  printf("\n");
  return 0;
}