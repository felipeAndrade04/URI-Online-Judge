#include <stdio.h>

int main() {
   int x, maior=0;

   while(scanf("%d", &x) != EOF && x != 0) {
      if(x > maior) maior = x;
   }

   printf("%d\n", maior);
   return 0;
}
