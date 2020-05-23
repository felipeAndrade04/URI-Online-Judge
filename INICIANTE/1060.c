#include <stdio.h>

int main() {
   float v[6];
   int i, positivo = 0;

   for(i = 0; i < 6; i++) scanf("%f", &v[i]);

   for(i = 0; i < 6; i++) {
      if(v[i] > 0) positivo++;
   }

   printf("%d valores positivos\n", positivo);
   return 0;
}
