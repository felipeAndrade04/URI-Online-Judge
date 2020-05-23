#include <stdio.h>

int main() {
   int x, soma, i;

   while(scanf("%d", &x) && x != 0) {
      soma = 0;
      if(x % 2 == 0) {
         for(i = 0; i <  5; i++) {
            soma = soma + x;
            x = x + 2;
         }      
      } else {
         x = x + 1;
         for(i = 0; i <  5; i++) {
            soma = soma + x;
            x = x + 2;
         }      
      }
      printf("%d\n", soma);      
   }
   return 0;
}
