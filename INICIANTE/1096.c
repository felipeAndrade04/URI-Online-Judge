#include <stdio.h>

int main() {
   int i = 1, j;

   while(i <= 9) {
      j = 7;
      while(j >= 5) {
         printf("I=%d J=%d\n", i, j);
         j--;
      }
      i = i + 2;
   }
   return 0;
}
