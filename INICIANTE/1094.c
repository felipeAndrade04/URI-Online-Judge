#include <stdio.h>

int main() {
   int n, sapo = 0, rato = 0, coelho = 0, total = 0, x;
   char c;
   float pSapo, pRato, pCoelho;

   scanf("%d", &n);

   while(n > 0) {
      scanf("%d %c", &x, &c);

      if(c == 'C') coelho += x;
      else if(c == 'R') rato += x;
      else if(c == 'S') sapo += x;
      total += x;
      n--;
   }
   pRato = (rato*100.0)/total;
   pSapo = (sapo*100.0)/total;
   pCoelho = (coelho*100.0)/total;

   printf("Total: %d cobaias\n", total);
   printf("Total de coelhos: %d\n", coelho);
   printf("Total de ratos: %d\n", rato);
   printf("Total de sapos: %d\n", sapo);
   printf("Percentual de coelhos: %.2f %%\n", pCoelho);
   printf("Percentual de ratos: %.2f %%\n", pRato);
   printf("Percentual de sapos: %.2f %%\n", pSapo);
   return 0;
}
