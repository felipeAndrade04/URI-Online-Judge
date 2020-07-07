#include <stdio.h>

int main() {
  int n, par, total, totalM, totalF, cont = 0;
  char tipo, espaco;

  while(scanf("%d", &n) != EOF) {
    total=0;
    totalF=0;
    totalM=0;
    if(cont != 0) printf("\n");
    while(scanf("%d %c%c",&par,&tipo,&espaco) == 3) {
      if(par == n){
        total++;
        if(tipo == 'M') totalM++;
        else totalF++;
      } 
      if(espaco == '\n') break;
    }
    cont++;
    printf("Caso %d:\n", cont);
    printf("Pares Iguais: %d\n", total);
    printf("F: %d\n", totalF);
    printf("M: %d\n", totalM);
  }
}