#include <stdio.h>

int main() {
   int x, i, cont = 1;
   scanf("%d", &x);

   while(cont <= 6) {
      if(x % 2 != 0){
         printf("%d\n", x);
         cont++;
      }
      x++;
   }
   return 0;
}


