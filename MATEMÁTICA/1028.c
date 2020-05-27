#include <stdio.h>

int main() {
  int n, f1, f2, resto, qtdFigurinha;

  scanf("%d", &n);
  while(n) {
    resto = 0;
    scanf("%d %d", &f1, &f2);
    
    while(f2 != 0) {
      resto = f1 % f2;
      f1 = f2;
      f2 = resto;
    }
    qtdFigurinha = f1;
    printf("%d\n", qtdFigurinha);
    n--;
  }

  return 0;
}