#include <stdio.h>

int main() {
  int n, v, maior, sMaior, i, posicao, posicaoMaior;

  while(scanf("%d", &n) != EOF && n != 0) {
    maior = 0;
    sMaior = 0;
    posicao = 0;
    posicaoMaior = 0;
    for(i = 1; i <= n; i++) {
      scanf("%d", &v);
      if(v > maior) {
        sMaior = maior;
        maior = v;
        posicao = posicaoMaior;
        posicaoMaior = i;
      }
      else if(v < maior && v > sMaior) {
        sMaior = v;
        posicao = i;
      }
    }
    printf("%d\n", posicao);
  }
  return 0;
}