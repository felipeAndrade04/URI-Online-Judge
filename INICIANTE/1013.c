#include <stdio.h>
#include <stdlib.h>

int main() {
   int a, b, c, x;
   scanf("%d %d %d", &a, &b, &c);
   x = (a + b + abs(a-b))/2;

   if(x < c) x = c;

   printf("%d eh o maior\n", x);
   return 0;
}
