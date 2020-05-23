#include <stdio.h>

int main() {
   int n, x, y, i, j, soma;
   scanf("%d", &n);

   for(i = 0; i < n; i++) {
      scanf("%d %d", &x, &y);
      soma = 0;
      if(x % 2 != 0) {
         for(j = 0; j < y; j++) {
            soma = soma + x;
            x = x + 2;
         }
      } else {
         x = x + 1;
         for(j = 0; j < y; j++) {
            soma = soma + x;
            x = x + 2;
         }
      }
      printf("%d\n", soma);
   }
   return 0;
}
