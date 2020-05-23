#include <stdio.h>

int main() {
  int n, c, s, e, qtd = 0, i;
  char saida = 'N';

  scanf("%d %d", &n, &c);
  for(i = 0; i < n; i++) {
    scanf("%d %d", &s, &e);
    qtd += e;
    qtd -= s;
    if(qtd > c) saida = 'S';
  }
  printf("%c\n", saida);
  return 0;
}