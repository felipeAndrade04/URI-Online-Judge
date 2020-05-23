#include <stdio.h>

int main() {
   int n;
   float n1,n2,n3, media;

   scanf("%d", &n);
   while (n > 0) {
      media = 0;
      scanf("%f %f %f", &n1, &n2, &n3);
      media = (n1*2 + n2*3 + n3*5)/10;
      printf("%.1f\n", media);
      n--;
   }
   
   return 0;
}
