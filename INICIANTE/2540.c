#include <stdio.h>

int main() {
  int n, v, soma, i;
  float valor;
  while(scanf("%d", &n) != EOF) {
    soma=0;
    for(i = 0; i < n; i++) {
      scanf("%d", &v);
      if(v==1) soma++;
    }
    valor = (n*2.0)/3.0;
    if(soma>=valor) printf("impeachment\n");
    else printf("acusacao arquivada\n");
  }
  return 0;
}