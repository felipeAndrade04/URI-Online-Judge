#include <stdio.h>

int main() {
   int x, alcool = 0, gasolina = 0, diesel = 0;

   while(scanf("%d", &x) != EOF && x != 4) {
      if(x == 1) alcool++;
      else if(x == 2) gasolina++;
      else if(x == 3) diesel++;
   }   
   printf("MUITO OBRIGADO\n");
   printf("Alcool: %d\n", alcool);
   printf("Gasolina: %d\n", gasolina);
   printf("Diesel: %d\n", diesel);
   return 0;
}
