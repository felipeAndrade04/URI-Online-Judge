#include <stdio.h>

int main() {
  int cont = 1, n, v, i, ganhador;

  while(scanf("%d", &n) != EOF && n != 0) {
    for(i = 1; i <= n; i++) {
      scanf("%d", &v);
      if(i == v) ganhador = i;
    }
    printf("Teste %d\n", cont);
    printf("%d\n\n", ganhador);
    cont++;
  }
  return 0;
}