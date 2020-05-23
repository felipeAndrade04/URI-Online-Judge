#include <stdio.h>

int main() {
  int i;
  double soma = 1, x = 2.0;
  for(i = 3; i < 40; i += 2) {
    soma = soma + (i/x);
    x = x * 2;
  }

  printf("%.2lf\n", soma);
  return 0;
}