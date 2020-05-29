#include <stdio.h>

int main() {
  int vetorImpar[5], vetorPar[5], v, i = 0, cont = 15, impar=0, par=0;

  while(cont--) {
    scanf("%d", &v);
    if(v % 2 == 0) {
      vetorPar[par] = v;
      par++;
    } 
    else {
      vetorImpar[impar] = v;
      impar++;
    }

    if(impar == 5) {
      for(i = 0; i < 5; i++) {
        printf("impar[%d] = %d\n", i, vetorImpar[i]);
      }
      impar = 0;
    }
    else if(par == 5) {
      for(i = 0; i < 5; i++) {
        printf("par[%d] = %d\n", i, vetorPar[i]);
      }
      par = 0;
    }
  }
  for(i = 0; i < impar; i++) {
    printf("impar[%d] = %d\n", i, vetorImpar[i]);
  }
  for(i = 0; i < par; i++) {
    printf("par[%d] = %d\n", i, vetorPar[i]);
  }
  return 0;
}