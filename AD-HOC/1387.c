#include <stdio.h>

int main() {
   int l, r;

   while (scanf("%d %d", &l, &r) != EOF && l != 0 && r != 0) {
      printf("%d\n", l + r);
   }
   
   return 0;
}
