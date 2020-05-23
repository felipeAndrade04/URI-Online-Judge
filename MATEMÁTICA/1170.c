#include <stdio.h>

int main() {
   int n, dias;
   float x;

   scanf("%d", &n);
   while (n > 0) {
      dias = 0;
      
      scanf("%f", &x);
      while (x > 1) {
         x = x / 2.0;
         dias++;
      }   
      printf("%d dias\n", dias);  
      n--;
   }
   
   return 0;
}





















