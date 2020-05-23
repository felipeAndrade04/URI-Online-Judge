#include <stdio.h>

int main() {
   int x, par = 0, i;

   for(i = 0; i < 5; i++) {
      scanf("%d", &x);
      if(x % 2 == 0) par++;
   }

   printf("%d valores pares\n", par);
   return 0;
}
