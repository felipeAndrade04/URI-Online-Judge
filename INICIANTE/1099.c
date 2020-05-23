#include <stdio.h>

int main() {
   int n, x, y, i, aux, soma = 0;
   scanf("%d", &n);

   while(n > 0) {
      scanf("%d %d", &x, &y);
      soma = 0;
      if(x > y) {
         aux = x;
         x = y;
         y = aux;
      }
      for(i = x+1; i < y; i++) {
         if( i % 2 != 0) soma = soma + i;
      }
      printf("%d\n", soma);
      n--;
   }
   return 0;
}

