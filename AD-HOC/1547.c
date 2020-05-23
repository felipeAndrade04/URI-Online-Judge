#include <stdio.h>
#include <math.h>

int main() {
  int n, qT, s, valor, posicao, anterior, i;
  scanf("%d", &n);
  while(n > 0) {
    scanf("%d %d", &qT, &s); 

    anterior = 10000;
    for(i = 1; i<=qT; i++) {
      scanf("%d", &valor);
      if(s == valor) {
        posicao = i;
        anterior = 10000;
        s = 10000;
      }
      else if(fabs(s - valor) < fabs(s - anterior)) {
        anterior = valor;
        posicao = i;
      }
    }
    printf("%d\n", posicao);
    n--;
  }  
  return 0;
}