#include <stdio.h>

int main() {
   int n, i, x = 1;
   scanf("%d", &n);

   for(i = 0;i < n; i++) {
      printf("%d %d %d PUM\n", x, x + 1, x + 2);
      x = x + 4;
   }
   return 0;
}
