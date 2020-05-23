#include <stdio.h>

int main() {
   int t, i, x = 0;

   scanf("%d", &t);

   for(i = 0; i < 1000; i++) {
      printf("N[%d] = %d\n", i, x);
      if(x < t-1) {         
         x++;
      } else {
         x = 0;
      }      
   }
   return 0;
}
