#include <stdio.h>

int main() {
   int a, b, c, a1, b1, c1;
   scanf("%d %d %d", &a, &b, &c);
   
   a1 = b * 2 + c * 4;
   b1 = a * 2 + c * 2;
   c1 = a * 4 + b * 2;

   if(a1 <= b1 && a1 <= c1) {
      printf("%d\n", a1);
      return 0;
   }
   if(b1 <= a1 && b1 <= c1) {
      printf("%d\n", b1);
      return 0;
   }
   if(c1 <= a1 && c1 <= b1) {
      printf("%d\n", c1);
      return 0;
   }
}
