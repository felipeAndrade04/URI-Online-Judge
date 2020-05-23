#include <stdio.h>

int main() {
   int x, a=0, m=0, d=0;

   scanf("%d", &x);

   if(x/365>=1) {
      a = x/365;
      x = x%365;
   } 
   if(x/30>=1) {
      m = x/30;
      x = x % 30;
   }

   printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, x);
   return 0;
}
