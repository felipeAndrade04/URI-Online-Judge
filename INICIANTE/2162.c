#include <stdio.h>

int main() {
  int n, h[10010], i, anterior, atual, tipoAtual, tipoAnterior, teste;

  scanf("%d", &n);
  for(i = 0; i < n; i++) {
    scanf("%d", &h[i]);
  }
  teste = 1;
  if(n == 2) {
    if(h[0] == h[1]) {
      teste = 0;
    }
  }
  else {
    anterior = h[0];

    if(anterior < h[1]) tipoAtual = 1;
    else tipoAtual = 0;
    anterior = h[1];
    for(i = 2; i < n; i++) {
      if(anterior < h[i]) {
        tipoAtual = 1;
      }
      else tipoAtual = 0;
      if(tipoAtual != tipoAnterior) {
        tipoAnterior = tipoAtual;
      }
      else {
        teste = 0;
      }
      anterior = h[i];
    }
  }
  
  printf("%d\n", teste);
  return 0;
}