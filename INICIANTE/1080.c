#include <stdio.h>

int main() {
   int v[101], maior = 0, posicao, i;

   for(i = 1; i <= 100; i++) {
      scanf("%d", &v[i]);

      if(v[i] > maior) {
         maior = v[i];
         posicao = i;
      }
   }
   printf("%d\n%d\n", maior, posicao);
   return 0;
}
