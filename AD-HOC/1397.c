#include <stdio.h>

int main() {
   int n, a, b, contA, contB, i;

   while (scanf("%d", &n) != EOF && n != 0) {
      contA = 0;
      contB = 0;
      for(i = 0; i < n; i++) {
         scanf("%d %d", &a, &b);
         if(a > b) contA++;
         else if(b > a) contB++;
      }
      printf("%d %d\n", contA, contB);
   }   
   return 0;
}
