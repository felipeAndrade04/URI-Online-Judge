#include <stdio.h>

int main() {
   float x, media = 0;
   int positivo = 0, i;
   
   for(i = 0; i < 6; i++) {
      scanf("%f", &x);
      if(x > 0) {
         positivo++;
         media += x;
      } 
   }

   media = media / positivo;
   printf("%d valores positivos\n", positivo);
   printf("%.1f\n", media);
   return 0;
}
