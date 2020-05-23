#include <stdio.h>

int main() {
  int c, p, f, valor;

  scanf("%d %d %d", &c, &p, &f);

  valor = p/f;

  if(c <= valor) printf("S\n");
  else printf("N\n");
  return 0;
}