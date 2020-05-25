#include <stdio.h>

int main() {
  int n, v, posicao, cont, i;
  while(scanf("%d", &n) != EOF && n != 0) {
    while (n) {
      cont = 0;
      for(i = 1; i <= 5; i++) {
        scanf("%d", &v);
        if(v <= 127) {
          posicao = i;
          cont++;
        }
      }
      if(cont > 1 || cont == 0) printf("*\n");
      else {
        if(posicao == 1) printf("A\n");
        else if(posicao == 2) printf("B\n");
        else if(posicao == 3) printf("C\n");
        else if(posicao == 4) printf("D\n");
        else if(posicao == 5) printf("E\n");
      }
      n--;
    }   
  }
  return 0;
}