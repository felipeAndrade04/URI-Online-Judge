#include <stdio.h>
#include <math.h>

int main() {
   float a, b, c, auxiliar;
   scanf("%f %f %f", &a, &b, &c);

   if(a >= b && a >= c) {
      if(c > b) {
         auxiliar = c;
         c = b;
         b = auxiliar;
      }
   }
   if(b > a) {      
      auxiliar = a;
      a = b;
      b = auxiliar;
   }
   if(c > a) {
      auxiliar = a;
      a = c;
      c = auxiliar;
      if(b < c) {
         auxiliar = b;
         b = c;
         c = auxiliar;
      }
   }
   
   if(a >= b+c) {
         printf("NAO FORMA TRIANGULO\n");
         return 0;
      }
      if(pow(a, 2) == pow(b, 2) + pow(c, 2)) {
         printf("TRIANGULO RETANGULO\n");
      }
      if(pow(a, 2) > pow(b, 2) + pow(c, 2)) {
         printf("TRIANGULO OBTUSANGULO\n");
      }
      if(pow(a, 2) < pow(b, 2) + pow(c, 2)) {
         printf("TRIANGULO ACUTANGULO\n");
      }
      if(a == b && a == c) {
         printf("TRIANGULO EQUILATERO\n");
      }
      if(a == b && a != c || a == c && a != b || b == c && b != a) {
         printf("TRIANGULO ISOSCELES\n");
      }

   return 0;
}
