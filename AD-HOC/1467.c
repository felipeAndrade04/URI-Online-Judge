#include <stdio.h>

int main() {
   int a, b, c;

   while(scanf("%d %d %d", &a, &b, &c) != EOF) {
      if((a == 1 && b == 0 && c == 0) || (a == 0 && b == 1 && c == 1)) printf("A\n");
      if((a == 1 && b == 0 && c == 1) || (a == 0 && b == 1 && c == 0)) printf("B\n");
      if((a == 1 && b == 1 && c == 0) || (a == 0 && b == 0 && c == 1)) printf("C\n");
      if((a == 0 && b == 0 && c == 0) || (a == 1 && b == 1 && c == 1)) printf("*\n");
   }
   
   return 0;
}
