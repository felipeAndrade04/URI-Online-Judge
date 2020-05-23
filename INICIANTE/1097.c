#include <stdio.h>

int main() {
   int i = 1, j, cont, x = 5;

   while(i <= 9) {
      j = x + 2;
      x = j;
      cont = 1;
      while(cont <= 3) {
         printf("I=%d J=%d\n", i, j);
         j--;
         cont++;
      }
      i = i + 2;
   }
   return 0;
}
